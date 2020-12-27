#include "cyber/class_loader/utility/shared_library.h"

#include <dlfcn.h>

namespace apollo {
namespace cyber {
namespace class_loader {
namespace utility {

SharedLibrary::SharedLibrary() : handle_(nullptr) {}

SharedLibrary::SharedLibrary(const std::string& filename) {
  Load(filename, 0);
}

SharedLibrary::SharedLibrary(const std::string& filename, int flag) {
  Load(filename, flag);
}

void SharedLibrary::Load(const std::string& filename) {
  Load(filename, 0);
}

void SharedLibrary::Load(const std::string& filename, int flag) {
  // Todo(zero):
  if (IsLoaded()) throw LibraryAlreadyLoadedException(filename);

  std::lock_guard<std::mutex> lock(mutex_);
  handle_ = dlopen(filename.c_str(), RTLD_LAZY | RTLD_GLOBAL);
  if (!handle_) {
    // Todo(zero): 
    const char* err = dlerror();
    throw LibraryLoadException(err ? std::string(err) : filename);
  }

  filename_ = filename;
}

bool SharedLibrary::Unload() {
  if (!IsLoaded()) return false;
  
  std::lock_guard<std::mutex> lock(mutex_);
  int count = dlclose(handle_);
  handle_ = nullptr;
  
  return !count;
}

bool SharedLibrary::IsLoaded() {
  std::lock_guard<std::mutex> lock(mutex_);  
  return handle_ != nullptr;
}

bool SharedLibrary::HasSymbol(const std::string& name) {
  return GetSymbol(name) != nullptr;
}

void* SharedLibrary::GetSymbol(const std::string& name) {
  if (!IsLoaded()) return nullptr;

  std::lock_guard<std::mutex> lock(mutex_);
  return dlsym(handle_, name.c_str());
}

SharedLibrary::~SharedLibrary() {
  Unload();
}


}  // utility
}  // class_loader
}  // cyber
}  // apollo
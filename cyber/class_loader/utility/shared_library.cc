#include "cyber/class_loader/utility/shared_library.h"

#include <dlfcn.h>
#include <exception>

namespace apollo {
namespace cyber {
namespace class_loader {
namespace utility {

SharedLibrary::SharedLibrary() : handle_(nullptr) {}

SharedLibrary::SharedLibrary(const std::string &filename) 
    : filename_(filename) {}

void SharedLibrary::Load() {
  // Todo(zero):
  if (IsLoaded()) throw exception();

  handle_ = dlopen(filename_.c_str(), RTLD_LAZY | RTLD_GLOBAL);
  if (!handle_) {
    // Todo(zero): 
    const char* err = dlerror();
    throw exception();
  }
}

bool SharedLibrary::Unload() {
  if (!IsLoaded()) return false;
  
  int count = dlclose(handle_);
  handle_ = nullptr;
  
  return !count;
}

bool SharedLibrary::IsLoaded() {
  return handle_ != nullptr;
}

void* SharedLibrary::GetSymbol(const std::string &name) {
  if (!IsLoaded()) return nullptr;

  return dlsym(handle_, name.c_str());
}



}
}
}
}
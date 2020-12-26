#ifndef CYBER_CLASS_LOADER_UTILITY_SHARED_LIBRARY_H_
#define CYBER_CLASS_LOADER_UTILITY_SHARED_LIBRARY_H_

#include <string>
#include <mutex>

namespace apollo {
namespace cyber {
namespace class_loader {
namespace utility {

class SharedLibrary {
 public:
  SharedLibrary();

  SharedLibrary(const std::string &filename);

  SharedLibrary(const std::string &filename, int flag);

  virtual ~SharedLibrary();
  
  void Load(const std::string &filename);

  void Load(const std::string &filename, int flag);

  void Unload();

  bool IsLoaded() const;

  bool HasSymbol(const std::string &name);

  void* GetSymbol(const std::string &name);

  const std::string& GetPath() const { return filename_};

  SharedLibrary(const SharedLibrary&) = delete;
  SharedLibrary& operator=(const SharedLibrary&) = delete;

 private:
  void *handle_;
  std::string filename_;

  std::mutex mutex_;
};

}
}
}
}
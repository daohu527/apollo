#ifndef CYBER_CLASS_LOADER_UTILITY_SHARED_LIBRARY_H_
#define CYBER_CLASS_LOADER_UTILITY_SHARED_LIBRARY_H_

#include <string>
#include <mutex>

#include "cyber/class_loader/utility/exception.h"

namespace apollo {
namespace cyber {
namespace class_loader {
namespace utility {

class SharedLibrary {
 public:
  enum Flags {
    SHLIB_GLOBAL = 1,
    SHLIB_LOCAL = 2,
  };

  SharedLibrary();

  SharedLibrary(const std::string& filename);

  SharedLibrary(const std::string& filename, int flags);

  virtual ~SharedLibrary();
  
  void Load(const std::string& filename);

  void Load(const std::string& filename, int flags);

  void Unload();

  bool IsLoaded();

  bool HasSymbol(const std::string& name);

  void* GetSymbol(const std::string& name);

  inline const std::string& GetPath() const { return filename_; };

  SharedLibrary(const SharedLibrary&) = delete;
  SharedLibrary& operator=(const SharedLibrary&) = delete;

 private:
  void* handle_;
  std::string filename_;

  std::mutex mutex_;
};

}  // utility
}  // class_loader
}  // cyber
}  // apollo

#endif  // CYBER_CLASS_LOADER_UTILITY_SHARED_LIBRARY_H_
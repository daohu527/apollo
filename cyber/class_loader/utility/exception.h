#ifndef CYBER_CLASS_LOADER_UTILITY_EXCEPTION_H_
#define CYBER_CLASS_LOADER_UTILITY_EXCEPTION_H_

#include <string>
#include <exception>


namespace apollo {
namespace cyber {
namespace class_loader {
namespace utility {

#define DECLARE_EXCEPTION_CLASS(CLS, BASE) \
class CLS : public BASE {                  \
 public:                                   \
  CLS(const std::string& err_msg) : err_msg_(err_msg) {}  \
  const char* what() const noexcept override {            \
    return err_msg_.c_str();                              \
  }                                                       \
 private:                                                 \
  std::string err_msg_;                                   \
};


DECLARE_EXCEPTION_CLASS(LibraryAlreadyLoadedException, std::exception)
DECLARE_EXCEPTION_CLASS(LibraryLoadException, std::exception)
DECLARE_EXCEPTION_CLASS(NotFoundException, std::exception)


}  // utility
}  // class_loader
}  // cyber
}  // apollo

#endif  // CYBER_CLASS_LOADER_UTILITY_EXCEPTION_H_
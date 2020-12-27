#include <string>
#include <exception>


namespace apollo {
namespace cyber {
namespace class_loader {
namespace utility {

class LibraryAlreadyLoadedException : public std::exception {
 public:
  LibraryAlreadyLoadedException(const std::string& err_msg) 
      : err_msg_(err_msg) {}
  
  const char* what() const noexcept override {
    return err_msg_.c_str();
  }
  
 private:
  std::string err_msg_;
};

class LibraryLoadException : public std::exception {
 public:
  LibraryLoadException(const std::string& err_msg) 
      : err_msg_(err_msg) {}

  const char* what() const noexcept override {
    return err_msg_.c_str();
  }

 private:
  std::string err_msg_;
};


}  // utility
}  // class_loader
}  // cyber
}  // apollo
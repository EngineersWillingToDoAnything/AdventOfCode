/**
 * @file error.cc
 * @author Alejandro Suárez Martín (alu0101345253@ull.edu.es)
 * @brief error handling functions
 * @version 1.0
 * @date 01-12-2022
 *
 */

#include "../include/error.h"

Error::Error() {
  message_ = "Unknown Error";
}

Error::Error(std::string message) : message_{message}{};

std::string Error::GetMessage() const {
  return message_;
}

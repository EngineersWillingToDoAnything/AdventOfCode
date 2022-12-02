/**
 * @file error.h
 * @author Alejandro Suárez Martín (alu0101345253@ull.edu.es)
 * @brief error handling class
 * @version 1.0
 * @date 01-12-2022
 *
 */
#ifndef AOC_DAY1_ERROR_H_
#define AOC_DAY1_ERROR_H_

#include <string>

/**
 * @brief exception handling class with messages and line of error if needed
 *
 */
class Error : public std::exception {
  public:
    Error();
    Error(std::string);

    std::string GetMessage() const;
  private:
    std::string message_;
};

#endif //AOC_DAY1_ERROR_H_
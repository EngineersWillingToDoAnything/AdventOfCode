/**
 * @file main.cc
 * @author Alejandro Suárez Martín (alu0101345253@ull.edu.es)
 * @brief gets the top elfs with most calories
 * @version 1.0
 * @date 01-12-2022
 *
 */

#include "functions.h"

#include <iostream>

int main(int argc, char** argv) {
  CheckInput(argc, argv);
  std::string file = argv[1];
  std::cout << "How many elfs do you want in the top? ";
  int top_number;
  std::cin >> top_number;
  GetTopElfs(top_number, file);
}
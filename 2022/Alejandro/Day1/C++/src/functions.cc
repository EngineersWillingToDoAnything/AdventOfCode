/**
 * @file functions.cc
 * @author Alejandro Suárez Martín (alu0101345253@ull.edu.es)
 * @brief auxiliar functions headers for main.cc
 * @version 1.0
 * @date 01-12-2022
 */

#include "functions.h"

#include <regex>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>

#include "../include/error.h"
#include "../include/elf.h"

void CheckInput(int argc, char** argv) {
  try {
    if (argc != 2) throw Error("Wrong number of arguments");
    std::regex input_file_regex(".*\\.txt");
    std::string ifile = argv[1];
    if(!std::regex_match(ifile.begin(), ifile.end(), input_file_regex)) throw Error("Wrong input file extension (only .txt)");
    std::ifstream my_file;
    my_file.open(ifile);
    if(!my_file.is_open()) throw Error("Input file does not exist");
  } catch (Error& custom_error) {
    std::cout << custom_error.GetMessage();
  }
}

void GetTopElfs(int top_number, std::string ifile) {
  std::ifstream my_file;
  my_file.open(ifile);
  std::vector<Elf*> top;
  std::string line;

  int number = 0;

  while(getline(my_file, line)) {
    if(!line.empty()) {
      CheckLine(line);
      number += std::stoi(line);
      continue;
    }
    int top_size = top.size();
    if(top_number > top_size) {
      top.push_back(new Elf(number));
      std::sort(top.begin(), top.end(), &DescendingOrder);
    } else {
      std::sort(top.begin(), top.end(), &DescendingOrder);
      for(int top_counter = 0; top_counter < top_size; ++top_counter) {
        if(number > top[top_counter]->GetCaloriesNumber()) {
          top.insert(std::find(top.begin(), top.end(), top[top_counter]), new Elf(number));
          top.pop_back();
          break;
        }
      }
    }
    number = 0;
  }
  int total = 0;
  for (auto elf : top) {
    std:: cout << elf->GetCaloriesNumber() << "\n";
    total += elf->GetCaloriesNumber();
  }
  std::cout << "total = " << total << "\n";
  my_file.close();
}

void CheckLine(std::string line) {
  try {
    std::regex number_reg("[0-9]+");
    if(!std::regex_match(line.begin(), line.end(), number_reg)) throw Error(line + " is not a number");
  } catch (Error& line_error) {
    std::cout << line_error.GetMessage() << "\n";
  }
}

bool DescendingOrder(Elf* elf1, Elf* elf2) {
  return elf1->GetCaloriesNumber() > elf2->GetCaloriesNumber();
}
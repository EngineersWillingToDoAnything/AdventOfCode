/**
 * @file elf.cc
 * @author Alejandro Suárez Martín (alu0101345253@ull.edu.es)
 * @brief elfs class with calories to compare and top
 * @version 1.0
 * @date 01-12-2022
 *
 */

#include "../include/elf.h"

#include <string>
#include <iostream>

#include "../include/error.h"

Elf::Elf() {
  this->elf_calories_ = Calories(0);
}

Elf::Elf(int number_of_calories) {
  elf_calories_ = Calories(number_of_calories);
}

Elf::Elf(Elf& new_elf_class) {
  *this = new_elf_class;
}

Elf::~Elf(){};

Calories& Elf::GetElfCalories() {
  return elf_calories_;
}

int Elf::GetCaloriesNumber() {
  return elf_calories_.GetCalories();
}

void Elf::SetElfCalories(Calories& new_calories) {
  elf_calories_ = new_calories;
}

Elf& Elf::operator=(Elf& new_elf) {
  if(elf_calories_ == new_elf.GetElfCalories()) return *this;
  SetElfCalories(new_elf.GetElfCalories());
  return *this;
}
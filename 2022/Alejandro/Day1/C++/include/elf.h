/**
 * @file elf.h
 * @author Alejandro Suárez Martín (alu0101345253@ull.edu.es)
 * @brief elfs class with calories to compare and top
 * @version 1.0
 * @date 01-12-2022
 *
 */

#ifndef AOC_DAY1_ELF_H_
#define AOC_DAY1_ELF_H_

#include <string>

#include "calories.h"

class Elf {
  public:
    Elf();
    Elf(int);
    Elf(Elf&);
    ~Elf();

    Calories& GetElfCalories();
    int GetCaloriesNumber();
    void SetElfCalories(Calories&);

    bool HasMoreCaloriesThan(Elf&);

    Elf& operator=(Elf&);
  private:
    Calories elf_calories_;
};

#endif //AOC_DAY1_ELF_H_
/**
 * @file functions.h
 * @author Alejandro Suárez Martín (alu0101345253@ull.edu.es)
 * @brief auxiliar functions headers for main.cc
 * @version 1.0
 * @date 01-12-2022
 *
 */
#ifndef AOC_DAY1_FUNCTIONS_H_
#define AOC_DAY1_FUNCTIONS_H_

#include <string>

class Elf;

void CheckInput(int, char**);
void GetTopElfs(int, std::string);
void CheckLine(std::string);
bool DescendingOrder(Elf*, Elf*);


#endif // AOC_DAY1_FUNCTIONS_H_
/**
 * @file calories.cc
 * @author Alejandro Suárez Martín (alu0101345253@ull.edu.es)
 * @brief calories class for elfs to be compared
 * @version 1.0
 * @date 01-12-2022
 *
 */
#include "../include/calories.h"

Calories::Calories() {
  calories_ = 0;
}

Calories::Calories(int number_of_calories) {
  SetCalories(number_of_calories);
}

Calories::Calories(Calories& new_calories_class) {
  *this = new_calories_class;
}

Calories::~Calories(){}

int Calories::GetCalories() const {
  return this->calories_;
}

void Calories::SetCalories(const int new_calories) {
  calories_ = new_calories;
}

Calories& Calories::operator=(const Calories& new_calories_class) {
  if (calories_ == new_calories_class.GetCalories()) return *this;
  SetCalories(new_calories_class.GetCalories());
  return *this;
}

bool Calories::operator>(const Calories& new_calories_class) const {
  return this->calories_ > new_calories_class.GetCalories();
}

bool Calories::operator==(const Calories& new_calories_class) const {
  return this->calories_ == new_calories_class.GetCalories();
}
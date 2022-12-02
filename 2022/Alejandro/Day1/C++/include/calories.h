/**
 * @file calories.h
 * @author Alejandro Suárez Martín (alu0101345253@ull.edu.es)
 * @brief calories class for elfs to be compared
 * @version 1.0
 * @date 01-12-2022
 *
 */
#ifndef AOC_DAY1_CALORIES_H
#define AOC_DAY1_CALORIES_H


/**
 * @brief calories that elfs carry
 */
class Calories {
  public:
    Calories();
    Calories(int);
    Calories(Calories&);
    ~Calories();

    int GetCalories() const;
    void SetCalories(const int);

    Calories& operator=(const Calories&);
    bool operator>(const Calories&) const;
    bool operator==(const Calories&) const;
  private:
    int calories_;
};

#endif // AOC_DAY1_CALORIES_H
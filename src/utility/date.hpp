#ifndef SRC_UTILITY_H
#define SRC_UTILITY_H

#include <string>
#include <array>

class Date{
  private:
    int date_, month_, year_;
    const std::array<std::string, 12> monthInWord = {"January", "Febuary", "March",
      "April", "May", "June", "July", "August", "September", 
      "October", "November","December"};

  public:
    Date(int date, int month, int year);
    Date() = default;
    Date& operator=(Date);
    void setDate(int date);
    void setMonth(int month);
    void setYear(int year);
    int getDate();
    int getMonth();
    std::string getMonthAsString();
    int getYear();
  
  private:
    bool validateDate(int date);
    bool validateMonth(int month);
    bool validateYear(int year);
};

#endif
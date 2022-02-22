#include "date.hpp"

Date::Date(int date, int month, int year) {
  setYear(year);
  setMonth(month);
  setDate(date);
}

Date& Date::operator=(Date date) {
  year_ = date.year_;
  month_ = date.month_;
  date_ = date.date_;
  return *this;
}

void Date::setDate(int date) {
  if (validateDate(date)) {
    date_ = date;
  } else {
    exit(1);
  }
}

void Date::setMonth(int month){
  if (validateMonth(month)) {
    month_ = month;
  } else {
    exit(1);
  }
}

void Date::setYear(int year){
  if (validateYear(year)) {
    year_ = year;
  } else {
    exit(1);
  }
}

int Date::getDate(){
  return date_;
}

int Date::getMonth(){
  return month_;
}

std::string Date::getMonthAsString(){
  return monthInWord[month_ - 1];  
}

int Date::getYear(){
  return year_;
}

bool Date:: validateYear(int year){
  return year > 1900;
}

bool Date:: validateMonth(int month){
  return month >= 1 && month <= 12;
}

bool Date:: validateDate(int date){
  if(month_ == 1 || month_ == 3 || month_ == 5 ||  month_ == 7 
    || month_ == 8 || month_ == 10 || month_ == 12) {
     return date >= 1 && date <= 31;
  } else if(month_ == 2){
    if (year_ % 100 && year_ % 4 == 0) {
      return date >= 1 && date <= 29;
    } else if (year_ % 400) {
      return date >= 1 && date <= 29;
    } else {
      return date >= 1 && date <= 28;
    }
  } else {
    return date >= 1 && date <= 30;
  }
}
#ifndef SRC_UTILITY_STUDENT_H
#define SRC_UTILITY_STUDENT_H

#include <string>
#include "person.hpp"
#include "utility/date.hpp"

class Student : public Person{
  Person name_;
  std::string roll_no_;
  std::string class_;
  Date dateOfAdmission_;
  Date dateOfPassingYear_;

  public:

  Student(Person, std::string, std::string, Date, Date);
  Student& operator= (const Student &);
  void setName(std::string);
  void setRollNo(std::string);
  void setClass(std::string);
  void setDateOfAdmission(Date);
  void setDateOfPassingYear(Date);
  std::string getName();
  std::string getRollNo();
  std::string getClass();
  Date getDateOfAdmission();
  Date getDateOfPassingYear();

};

#endif
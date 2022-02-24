#ifndef SRC_UTILITY_STUDENT_H
#define SRC_UTILITY_STUDENT_H

#include <string>
#include <vector>
#include "person.hpp"
#include "utility/date.hpp"
#include "utility/address.hpp"
#include "utility/contact.hpp"
#include "utility/qualification.hpp"

class Student : public Person{
  private:
    std::string rollNo_;
    std::string class_;
    Date dateOfAdmission_;
    Date dateOfPassingYear_;

  public:
  Student(std::string, Date, std::vector<Qualification>, Address, Address, BloodGroup, 
    Contact, Contact,std::string, std::string, Date);
  Student(std::string, Date, std::vector<Qualification>, Address, Address, BloodGroup, 
    Contact, Contact,std::string, std::string, Date, Date);
  void setRollNo(std::string);
  void setClass(std::string);
  void setDateOfAdmission(Date);
  void setDateOfPassingYear(Date);
  std::string getRollNo();
  std::string getClass();
  Date getDateOfAdmission();
  Date getDateOfPassingYear();
};

#endif
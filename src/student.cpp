#include "student.hpp"

Student::Student(Person name, std::string rollno, std::string class, Date dateOfAdmission,
 Date dateOfPassingYear){
  setName(name);
  setRollNo(rollno);
  setClass(class);
  setDateOfAdmission(dateOfAdmission);
  setDateOfPassingYear(dateOfPassingYear);
 }
 Student& Student::operator=(const Student &other){
   name_ = other.name_;
   roll_no_ = other.roll_no_;
   class_ = other.class_;
   dateOfAdmission_ = other.dateOfAdmission_;
   dateOfPassingYear_ = other.dateOfPassingYear_;
 }

 void Student::setname(std::string name){
   name_ = name;
 }

 void Student::setRollNo(std::string rollno){
   roll_no = rollno;
 }

 void Student::setClass(std::string )
  std::string getRollNo();
  std::string getClass();
  Date getDateOfAdmission();
  Date getDateOfPassingYear();
 
  
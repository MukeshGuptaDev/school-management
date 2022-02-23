#include "student.hpp"

  Student::Student(std::string name, Date dob, std::vector<Qualification> qualification,
    Address currentAddress, Address parmanentAddress, BloodGroup bloodGroup, 
    Contact contact, Contact emerygencyContact, std::string rollNo, 
    std::string curClass, Date dateOfAdmission) : Person(name, dob, qualification,
      currentAddress, parmanentAddress, bloodGroup, contact, emerygencyContact)  {
        setRollNo(rollNo);
        setClass(curClass);
        setDateOfAdmission(dateOfAdmission);
    }


  Student::Student(std::string name, Date dob, std::vector<Qualification> qualification,
    Address currentAddress, Address parmanentAddress, BloodGroup bloodGroup, 
    Contact contact, Contact emerygencyContact, std::string rollNo, 
    std::string curClass, Date dateOfAdmission, Date dateOfPassing) {
      Student(name, dob, qualification, currentAddress, parmanentAddress, bloodGroup,
        contact, emerygencyContact, rollNo, curClass, dateOfAdmission);
      setDateOfPassingYear(dateOfPassing);
    }


  void Student::setRollNo(std::string rollNo) {
    rollNo_ = rollNo;
  }

  void Student::setClass(std::string curClass) {
    class_ = curClass;
  }

  void Student::setDateOfAdmission(Date date) {
    dateOfAdmission_ = date;
  }

  void Student::setDateOfPassingYear(Date date) {
    dateOfPassingYear_ = date;
  }

  std::string Student::getRollNo() {
    return rollNo_;
  }

  std::string Student::getClass() {
    return class_;
  }

Date Student::getDateOfAdmission(){
  return dateOfAdmission_;
} 
  
  Date Student::getDateOfPassingYear(){
    return dateOfPassingYear_;
  }
#include "empolyee.hpp"


Empolyee::Empolyee(std::string name, Date dob, std::vector<Qualification> qualification,
    Address currentAddress, Address parmanentAddress, BloodGroup bloodGroup, 
    Contact contact, Contact emerygencyContact, long double salary, 
    Role role, Date dateOfJoining) : Person(name, dob, qualification,
      currentAddress, parmanentAddress, bloodGroup, contact, emerygencyContact)  {
        setSalary(salary);
        setRole(role);
        setDateOfJoining(dateOfJoining);
    }

Empolyee::Empolyee(std::string name, Date dob, std::vector<Qualification> qualification,
    Address currentAddress, Address parmanentAddress, BloodGroup bloodGroup, 
    Contact contact, Contact emerygencyContact, long double salary, 
    Role role, Date dateOfJoining, Date dateOfLeaving) : Person(name, dob, qualification,
      currentAddress, parmanentAddress, bloodGroup, contact, emerygencyContact)  {
        setSalary(salary);
        setRole(role);
        setDateOfJoining(dateOfJoining);
        setDateOfleaving(dateOfLeaving);
    }

void Empolyee::setDateOfJoining(Date dateOfJoining){
  dateOfJoining_ = dateOfJoining;
}

void Empolyee::setDateOfleaving(Date dateOfLeaving){
  dateOfLeaving_ = dateOfLeaving;
}

void Empolyee::setRole(Role role){
  role_ = role;
}

void Empolyee::setSalary(long double salary){
  salary_ = salary;
 
}

Date Empolyee::getDateOfJoining(){
  return dateOfJoining_;
}

Date Empolyee::getDateOfleaving(){
  return dateOfLeaving_;
}

Role Empolyee::getRole(){
  return role_;
}

long double Empolyee::getSalary(){
  return salary_;
}
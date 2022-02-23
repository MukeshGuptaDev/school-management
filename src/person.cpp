#include "person.hpp"


Person::Person(std::string name, Date dob, std::vector<Qualification> qualification,
 Address currentAddress, Address permanentAddress, BloodGroup bloodGroup, 
 Contact contact, Contact emergencyContact){
   setName(name);
   setDateOfBirth(dob);
   setQualification(qualification);
   setCurrentAddress(currentAddress);
   setPermanentAddress(permanentAddress);
   setBloodGroup(bloodGroup);
   setContact(contact);
   setEmergencyContact(emergencyContact);
 }

 Person& Person::operator=(const Person &other){
   name_ = other.name_;
   dob_ = other.dob_;
   qualification_ = other.qualification_;
   currentAddress_ = other.currentAddress_;
   permanentAddress_ = other.permanentAddress_;
   bloodGroup_ = other.bloodGroup_;
   contact_ = other.contact_;
   emergencyContact_ = other.emergencyContact_;
   return *this;
 }

void Person::setName(std::string name){
  name_ = name;
}

void Person::setDateOfBirth(Date dob){
  dob_ = dob;
}

void Person::setQualification(std::vector<Qualification>& qualification){
  qualification_ = qualification;
}

void Person::setCurrentAddress(Address currentAddress){
  currentAddress_ = currentAddress;
}

void Person::setPermanentAddress(Address permanentAddress){
  permanentAddress_ = permanentAddress;
} 

void Person::setBloodGroup(BloodGroup bloodGroup){
  bloodGroup_ = bloodGroup;
}

void Person::setContact(Contact contact){
  contact_ = contact;
}

void Person::setEmergencyContact(Contact emergencyContact){
  emergencyContact_ = emergencyContact;
}

std::string Person:: getName(){
 return name_;
}

Date Person::getDateOfBirth(){
  return dob_;
}

std::vector<Qualification> Person::getQualificati(){
  return qualification_;
}
    
Address Person::getCurrentAddress(){
  return currentAddress_;
}
    
Address Person::getPermanentAddress(){
  return permanentAddress_;
}    
    
BloodGroup Person::getBloodGroup(){
  return bloodGroup_;
}
    
Contact Person::getContact(){
  return contact_;
}
Contact Person::getEmergencyContact(){
  return emergencyContact_;
}
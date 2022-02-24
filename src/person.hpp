#ifndef SRC_UTILITY_PERSON_H
#define SRC_UTILITY_PERSON_H

#include <string>
#include <vector>
#include "utility/address.hpp"
#include "utility/contact.hpp"
#include "utility/date.hpp"
#include "utility/qualification.hpp"
#include "utility/enums.hpp"

class Person{
  private:
    std::string name_;
    Date dob_;
    std::vector<Qualification> qualification_;
    Address permanentAddress_;
    Address currentAddress_;
    BloodGroup bloodGroup_;
    Contact contact_;
    Contact emergencyContact_;  
  
  public:
    
    Person(std::string, Date, std::vector<Qualification>, Address, Address, BloodGroup, Contact, Contact);
    Person& operator= (const Person &);
    void setName(std::string);
    void setDateOfBirth(Date);
    void setQualification(std::vector<Qualification>&);
    void setCurrentAddress(Address);
    void setPermanentAddress(Address);    
    void setBloodGroup(BloodGroup);
    void setContact(Contact);
    void setEmergencyContact(Contact);
    std::string getName();
    Date getDateOfBirth();
    std::vector<Qualification> getQualificati();
    Address getCurrentAddress();
    Address getPermanentAddress();    
    BloodGroup getBloodGroup();
    Contact getContact();
    Contact getEmergencyContact();    

};

#endif

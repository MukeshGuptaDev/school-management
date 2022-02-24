#include <iostream>
#include <vector>

#include "person.hpp"
#include "student.hpp"

#include "utility/address.hpp"
#include "utility/contact.hpp"
#include "utility/date.hpp"
#include "utility/enums.hpp"
#include "utility/qualification.hpp"

int main() {
  // student
  std::string sname = "Anil";
  Date sdob = Date(10, 10, 2000);
  std::vector<Qualification> sq;
  sq.push_back(Qualification("JP College", "BCA", Date(20, 7, 2018), Date(1, 5, 2021)));
  Address sCurAddress = Address("House No 11", "Bhojpur", "Bihar", "India", 802313);
  Address sPerAddress = Address("House No 11", "Bhojpur", "Bihar", "India", 802313);
  BloodGroup sBloodGroup = BloodGroup::BPositive;
  Contact sContact = Contact(9876543210);
  Contact sEmergencyContact = Contact(9876543211);

  std::string sRollNo = "123";
  std::string sClass = "MCA";
  Date sDateOfAddmission = Date(20, 7, 2021);

  Student student = Student(sname, sdob, sq, sCurAddress, sPerAddress, 
    sBloodGroup, sContact, sEmergencyContact, sRollNo, sClass, sDateOfAddmission);

  
  // professor
}
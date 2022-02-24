#ifndef SRC_UTILITY_EMPOLYEE_H
#define SRC_UTILITY_EMPOLYEE_H

#include <string>
#include <vector>
#include "person.hpp"
#include "utility/date.hpp"
#include "utility/address.hpp"
#include "utility/contact.hpp"
#include "utility/qualification.hpp"

class Empolyee : public Person{
  private:
    Date dateOfJoining_;
    Date dateOfLeaving_;
    Role role_;
    long double salary_;
  public:
    Empolyee(std::string, Date, std::vector<Qualification>, Address, Address, BloodGroup, 
      Contact, Contact, long double, Role, Date);
    Empolyee(std::string, Date, std::vector<Qualification>, Address, Address, BloodGroup, 
      Contact, Contact, long double, Role, Date, Date);
    void setDateOfJoining(Date);
    void setDateOfleaving(Date);
    void setRole(Role);
    void setSalary(long double);
    Date getDateOfJoining();
    Date getDateOfleaving();
    Role getRole();
    long double getSalary();
};

#endif
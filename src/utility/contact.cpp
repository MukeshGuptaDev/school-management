#include "contact.hpp"
#include <cstdlib>

Contact::Contact(long long number) {
  setNumber(number);
}
Contact& Contact::operator=(const Contact& other) {
  number_ = other.number_;
  return *this;
}
void Contact::setNumber(long long number) {
  if (verifyNumber(number))
    number_ = number;
  else 
    exit(1);
}

long long Contact::getNumber(){
  return number_;
}

bool Contact::verifyNumber(long long number) {
  long long lb = 1e9;
  long long ub = 1e10;
  return lb <= number && number < ub;
}
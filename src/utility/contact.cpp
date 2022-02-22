#include "contact.hpp"

Contact::Contact(long long number) {
  setNumber(number);
}
Contact& Contact::operator=(const Contact& other) {
  number_ = other.number_;
  return *this;
}
void Contact::setNumber(long long number) {
  number_ = number;
}

long long Contact::getNumber(){
  return number_;
}
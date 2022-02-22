#include "qualification.hpp"

Qualification::Qualification(std::string college, std::string degree, Date from, 
  Date to){  
  setCollege(college);
  setDegree(degree);
  setFromDate(from);
  setToDate(to);
}

Qualification& Qualification::operator=(const Qualification &other){
  college_ = other.college_;
  degree_ = other.degree_;
  to_ = other.to_;
  from_ = other.from_;
  return *this;
}

void Qualification::setCollege(std::string college){
  college_ = college;
}

void Qualification::setDegree(std::string degree){
  degree_ = degree;
}

void Qualification::setFromDate(Date date){
  from_ = date;
}

void Qualification::setToDate(Date date) {
  to_ = date;
}

std::string Qualification::getCollege(){
  return college_;
}

std::string Qualification::getDegree(){
  return degree_;
}

Date Qualification::getFromDate() {
  return from_;
}

Date Qualification::getToDate() {
  return to_;
}
#include"address.hpp"

Address::Address(std::string location, std::string district, 
    std::string state, std::string country, int pincode){
    
  setLocation(location);
  setDistrict(district);
  setState(state);
  setCountry(country);
  setPincode(pincode);
}

void Address::setLocation(std::string location) {
  location_ = location;
}

void Address::setDistrict(std::string district){
  district_ = district;
}

void Address::setState(std::string state){
  state_ = state;
}

void Address::setCountry(std::string country){
  country_ = country;
}

void Address::setPincode(int pincode){
  pincode_ = pincode;
}

std::string Address::getLocation(){
  return location_;
}

std::string Address::getCountry(){
  return country_;
}

std::string Address::getDistrict(){
  return district_;
}
    
std::string Address::getState(){
  return state_;
}

int Address::getPincode(){
  return pincode_;     
}

std::string Address::getAddress(){
  std::string result = location_;
  result += "," + district_;
  result += "," + state_;
  result += "," + country_;
  result += "," + std::to_string(pincode_);
  return result;
}
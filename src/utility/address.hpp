#ifndef SRC_UTILITY_ADDRESS_H
#define SRC_UTILITY_ADDRESS_H

#include <string>

class Address{
  private:
    std::string location_, district_, state_, country_;
    int pincode_;
    
  public:
    Address(std::string location, std::string district, 
    std::string state, std::string country, int pincode);

    void setLocation(std::string location );
    void setDistrict(std::string district);
    void setState(std::string state);
    void setCountry(std::string country);
    void setPincode(int pincode);
    std::string getLocation();
    std::string getCountry();
    std::string getDistrict();
    std::string getState();
    int getPincode();

    std::string getAddress();

};    

#endif
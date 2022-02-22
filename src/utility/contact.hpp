#ifndef SRC_UTILITY_CONTACT_H
#define SRC_UTILITY_CONTACT_H

class Contact {
  private:
    long long number_;
  
  public:
    Contact(long long);
    Contact& operator=(const Contact&);
    void setNumber(long long);
    long long getNumber();
};

#endif

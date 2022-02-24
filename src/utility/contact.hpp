#ifndef SRC_UTILITY_CONTACT_H
#define SRC_UTILITY_CONTACT_H

class Contact {
  private:
    long long number_;
  
  public:
    Contact(long long);
    Contact() = default;
    Contact& operator=(const Contact&);
    void setNumber(long long);
    long long getNumber();

  private:
    bool verifyNumber(long long);
};

#endif

#ifndef SRC_UTILITY_QUALIFICATION_H
#define SRC_UTILITY_QUALIFICATION_H

#include <string>
#include "date.hpp"

class Qualification{
  private:
    std::string college_, degree_;
    Date to_, from_;

  public:
    Qualification(std::string college, std::string degree, Date from, Date to);
    Qualification& operator=(const Qualification &other);
    Qualification() = default;
    void setCollege(std::string);
    void setDegree(std::string);
    void setFromDate(Date);
    void setToDate(Date);
    std::string getCollege();
    std::string getDegree();
    Date getFromDate();
    Date getToDate();
};

#endif
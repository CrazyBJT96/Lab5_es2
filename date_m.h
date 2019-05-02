//
// Created by Tommy on 11/04/2019.
//

#ifndef LAB_5_2_DATE_M_H
#define LAB_5_2_DATE_M_H

#include <string>
#include <ostream>
using namespace std;
class date_m {
public:
    //default constructor
    date_m();
    //overload constructor
    date_m(string date);


    string stri() const;

    string  _age_c();





private:
    bool is_valid() const;
    void split_f();
    int _year;
    int _month;
    int _day;
    string _date;
    int _birth_year;


};


#endif //LAB_5_2_DATE_M_H

//
// Created by Tommy on 11/04/2019.
//

#include "date_m.h"
#include <iostream>
#include <algorithm>
using namespace std;

#include <string>
#include <sstream>

//default constructor
date_m::date_m()
{
    //default parameters
    _year = 2019;
    _day = 11;
    _month = 04;
    _birth_year = 0;


}
//overload constructor
date_m::date_m(string date)
{
    //review this, must split the string passed by mother class
    _date = date;
    _birth_year = 0;
    split_f();


}


void date_m::split_f()
{
    stringstream s_a;
    s_a << _date;
    s_a >> _day;
    s_a >> _month;
    s_a >> _year;
    is_valid();

}

//print function
string date_m::stri() const
{
    //string date return
    ostringstream s;
    s << _day << "/" << _month << "/" << _year;
    return s.str();
}
//is_valid function
bool date_m::is_valid() const
{
    if ((0 < _day < 31) && (0 < _month < 13))
    {return true;}
    else{return false;}
}

//age calculator
string date_m::_age_c()
{
    _birth_year = 2019 - _year;
    return to_string(_birth_year);

}

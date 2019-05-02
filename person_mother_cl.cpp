//
// Created by Tommy on 11/04/2019.
//

#include "person_mother_cl.h"
#include "date_m.h"
//#include "date_m.h"
#include <string>
using namespace std;

//default constructor
person_mother_cl::person_mother_cl()
{
    //_name = "Ok";
    //_surname = "ok";
    //_gender = 'm';
}
person_mother_cl::person_mother_cl(string name, string surname, date_m date, char gender)
{
    _name = name;
    _surname = surname;
    _gender = gender;
    ob_date = date;
}

//name getter
string person_mother_cl::getName() const
{
 return _name;
}
//surname getter
string person_mother_cl::getSurname() const
{
 return _surname;
}
//gender getter
char person_mother_cl::getGender() const
{
 return _gender;
}
//date getter from mother class
string person_mother_cl::getBirthDate() const
{
    return ob_date.stri();
}
//age getter from mother class
string person_mother_cl::_getAge()
{
    return ob_date._age_c();
}
//final string
string person_mother_cl::str_a()
{
 string m_str = getName() + " " + getSurname() + " " + getGender() + " " + _getAge() + " " + getBirthDate();
    return  m_str;
}


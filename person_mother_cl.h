//
// Created by Tommy on 11/04/2019.
//

#ifndef LAB_5_2_PERSON_MOTHER_CL_H
#define LAB_5_2_PERSON_MOTHER_CL_H

#include "date_m.h"
#include <string>
using namespace std;
class person_mother_cl {


public:
    //overload constructor
    person_mother_cl();
    person_mother_cl(string name, string surname, date_m date, char gender );

    string getBirthDate() const;
    string getName() const;
    string getSurname() const;
    char getGender() const;

    string _getAge() ; //method from date class

    string str_a() ;

private:
    string _name;
    string _surname;
    date_m _birth_year;
    char _gender;
    date_m ob_date;




};


#endif //LAB_5_2_PERSON_MOTHER_CL_H

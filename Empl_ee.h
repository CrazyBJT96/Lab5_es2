//
// Created by Tommy on 01/05/2019.
//

#ifndef LAB_5_2_EMPL_EE_H
#define LAB_5_2_EMPL_EE_H


#include "person_mother_cl.h"
#include "job_c.h"
#include "date_m.h"
using namespace std;
class Empl_ee : public person_mother_cl{

public:
Empl_ee();
Empl_ee(person_mother_cl info, int matr, string pos, date_m st_date);


void addJob(job_c jo_in);

void order();
void report();


private:
    int _matr;
    string _pos;
    job_c ob_jb;
    date_m ob_dat;
    person_mother_cl ob_pers;

    string _temp_name;
    string _temp_sur;
    char _temp_gender;
    string _temp_bd;
    string _temp_comp;
    string _temp_jobtitl;
    string _temp_salary;
    string _temp_startdate;
    string _temp_enddate;

    int _comp_day;
    int _comp_month;
    int _comp_year;
    int _new_day;
    int _new_month;
    int _new_year;

};


#endif //LAB_5_2_EMPL_EE_H

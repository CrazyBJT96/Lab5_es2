//
// Created by Tommy on 01/05/2019.
//

#include "Empl_ee.h"
#include "person_mother_cl.h"
#include "job_c.h"
#include "date_m.h"
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;
//default const
Empl_ee::Empl_ee()
{
    _comp_year = 0;
    _comp_day = 0;
    _comp_month = 0;
    _new_day = 0;
    _new_month = 0;
    _new_year = 0;
}

//overload const
Empl_ee::Empl_ee(person_mother_cl info, int matr, string pos, date_m st_date)
{
    _matr = matr;
    _pos = pos;
    //ob_pers = info;
    ob_dat = st_date;
}

void Empl_ee::addJob(job_c jo_in)
{
    ofstream file_l;

    file_l.open("Data.txt", ofstream::app);
    file_l << getName() << " " << getSurname() << " " << getGender() << " " << getBirthDate() << endl;
    file_l << ob_jb.getCompanyName() << " " << ob_jb.getJobTitle() << " " << ob_jb.getSalary() << " " <<
    ob_jb.getStartingDate() << " " << ob_jb.getEndDate() << endl;
}

void Empl_ee::order()
{
   ofstream file_h;
    ifstream file_k;
    stringstream sf, sh;
    string rig;
    string rig_1;
   file_k.open("Data.txt");
   file_h.open("temp.txt", ofstream::app);
   getline(file_k, rig);
   sf << rig;
   sf >> _temp_name;
   sf >> _temp_sur;
   sf >> _temp_gender;
   sf >> _temp_bd;
   file_h << _temp_name << " " << _temp_sur << " " << _temp_gender << " " << _temp_bd << endl;

   if(file_k.is_open())
   {
       while(getline(file_k, rig_1))
       {
           sf << rig;
           sf >> _temp_comp;
           sf >> _temp_jobtitl;
           sf >> _temp_salary;
           sf >> _temp_startdate;
           sf >> _temp_enddate;

           _temp_startdate.replace(_temp_startdate.begin(), _temp_startdate.end(), '/', ' ');

           sh << _temp_startdate;
           sh >>  _comp_day;
           sh >> _comp_month;
           sh >> _comp_year;

           if (_comp_year > _new_year)
           {file_h << _temp_comp << " " << _temp_jobtitl << " " << _temp_salary << " " << _temp_startdate << " "
            << _temp_enddate;}
           else if (_comp_month > _new_month)
           {file_h << _temp_comp << " " << _temp_jobtitl << " " << _temp_salary << " " << _temp_startdate << " "
                   << _temp_enddate;}
           else if(_comp_day > _new_day)
           {file_h << _temp_comp << " " << _temp_jobtitl << " " << _temp_salary << " " << _temp_startdate << " "
                   << _temp_enddate;}

           sf.clear();
           sh.clear();
           _new_day = _comp_day;
           _new_month = _comp_month;
           _new_year = _comp_year;

       }
       file_h.close();
       file_k.close();
       rename("temp", "Data.txt");
       //remove("temp.txt");



   }
   else {cerr << "Unable to open file";}
}

void Empl_ee::report()
{
    ifstream file_l;
    string rig;
    file_l.open("Data.txt");
    if (file_l.is_open())
    {
        while(getline(file_l, rig))
        {
            cout << rig;
        }
    }
    else {cerr << "Unable to open file.";}
    file_l.close();
}

//
// Created by Tommy on 01/05/2019.
//
#include "date_m.h"
#include "job_c.h"
#include <fstream>
//deafault const
job_c::job_c()
{
    _com_name = "ok";
    _job_type = "ok";
    _sala_job = 0.0;
}
//overload const
job_c::job_c(string com_name, string job_type, float sala_job, date_m start_date, date_m end_date)
{
  _com_name = com_name;
  _job_type = job_type;
  _sala_job = sala_job;
  ob_jb_st = start_date;
  ob_jb_end = end_date;

}

string job_c::getCompanyName()
{
    return _com_name;
}

string job_c::getJobTitle()
{
    return _job_type;
}

float job_c::getSalary() const
{
    return _sala_job;
}

string job_c::getStartingDate()
{
  return ob_jb_st.stri();
}

string job_c::getEndDate()
{
  return ob_jb_end.stri();
}







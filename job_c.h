//
// Created by Tommy on 01/05/2019.
//

#ifndef LAB_5_2_JOB_C_H
#define LAB_5_2_JOB_C_H

class job_c {
public:
    //default const
    job_c();
    //overl const
    job_c(string com_name, string job_t, float sal_j, date_m st_date, date_m ed_date);

    string getCompanyName();
    string getJobTitle();
    float getSalary() const;

    string getStartingDate();
    string getEndDate();


private:
    string _com_name;
    string _job_type;
    float _sala_job;
    date_m ob_jb_st;
    date_m ob_jb_end;


};


#endif //LAB_5_2_JOB_C_H

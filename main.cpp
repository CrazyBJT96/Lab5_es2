#include <iostream>
#include "person_mother_cl.h"
#include "date_m.h"
#include "job_c.h"
#include "Empl_ee.h"
using namespace std;
int main(int argc , char *argv []) {


    Empl_ee standard_employee(person_mother_cl("Paolo", "Long", date_m("26 4 1985"), 'M'), 131415, "Ing. Informatico"
    , date_m("1 10 2010"));

    standard_employee.addJob(job_c("Fiat", "Engine Engineer", 50000, date_m("1 1 2014"), date_m("31 1 2015")));

    standard_employee.addJob(job_c("Alenia", "Engine R&D Chief", 45000, date_m("1 2 2015"), date_m("31 1 2017")));

    standard_employee.addJob(job_c("ST Microelectronics", "Motor designer", 30000, date_m("1 1 2012"), date_m("31 12 2014")));

   standard_employee.addJob(job_c("ABB", "Junior Developer", 25000, date_m("1 1 2011"), date_m("31 12 2011")));

    standard_employee.order();
    standard_employee.report();

    return 0;
}
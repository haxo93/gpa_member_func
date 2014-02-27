#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include "student.h"

using namespace std;

Student::Student()
{
    name = "";
    credits = 0;
    qp = 0;
}

Student::Student(string tempname,int tempcredits, double tempqp)
{
    name = tempname;
    credits = tempcredits;
    qp = tempqp;
}

double Student::computeGPA()
{
    if (credits > 0)
        return qp/credits;
    else
        return 0.0;
}

void Student::addGrade(string tempgrade, int tempcredits)
{
    credits += tempcredits;
    double v = findGradeValue(tempgrade);
    qp += tempcredits * v;
}





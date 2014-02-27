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
    if (tempcredits == 0 && tempqp == 0)
        return;
    if (tempcredits > 0)
        credits = tempcredits;
    else
        credits = 0;
    if (tempqp > 0)
        qp = tempqp;
    else
        qp = 0;

}

double Student::computeGPA()
{
    if (credits > 0 || qp > 0)
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





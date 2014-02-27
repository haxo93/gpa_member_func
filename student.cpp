#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include "student.h"

using namespace std;

Student::Student(string name,int credits, double qp)
{
    this->name = name;
    this->credits = credits;
    this->qp = qp*credits;
}

double Student::computeGPA()
{
    if (this->credits > 0)
        return this->qp / this->credits;
    else
        return 0.0;
}

void Student::addGrade(string grade, int credits)
{
    this->credits = this->credits + credits;
    double v = findGradeValue(grade);
    this->qp = (credits * v) + qp;
}
;

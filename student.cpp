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
    qp = 0.0;
}

Student::Student(string tempname,int tempcredits, double tempqp)
{
   name = tempname;
   credits = tempcredits;
   qp = tempqp;

}

double Student::computeGPA()
{
    if (credits == 0)
    {
        return 0.0 ;
    }
        else if 
    {
        (isalpha(credits))
    }    
        return 0.0;
        
    else 
    {
        studentGPA = qp/credits;
        return studentGPA;
    }
}


void Student::addGrade(string tempgrade, int tempcredits)
{
    if (credits <0) 
    {
        credits == 0 
    }
        return 0.0;
    credits += tempcredits;
    double v = findGradeValue(tempgrade);
    qp += tempcredits * v;
}





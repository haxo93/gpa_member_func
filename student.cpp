#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include "student.h"
#include "gradeValue.h"

using namespace std;





Student::Student(string name,int credits,double qp){
this->name = name;
this->credits = credits;
this->qp = qp;
}


double computeGPA()
{
if (this->credits > 0)
return this->qualityPoints / this->credits;
else
return 0.0;
}

void addGrade(string grade, int credits)
{
this->credits += credits;
double v = findGradeValue(gradeValues, 11, grade);
this->qualityPoints += credits * v;
}





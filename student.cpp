#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include "student.h"
#include "gradeValue.h"

using namespace std;




Student::Student(string name,int credits,double qp){
    name = "";
    credits = 0;
    qp = 0.0;

}

double computeGPA (const Student& aStudent)
{
     if (aStudent.credits ==0)
        return 0.0;
    else return aStudent.qp / aStudent.credits;
}

void addGrade(Student& aStudent, string grade, int credits)
{
    if (credits < 0)
        credits =0;
    aStudent.credits += credits;
   aStudent.qp += findGradeValue (gradeValues, 11, grade) * credits;
}





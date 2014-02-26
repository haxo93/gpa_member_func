#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include "gradeValue.h"
#include "gradeValue.cpp"

class Student
{
public:
    Student(std::string, int, double);
    //variables
    std::string name;
    int credits;
    double qp;
    //const GradeValue gradeValues;
    //functions
    //std::string student(std::string name,int credits, double qp);
    void addGrade(const GradeValue, std::string grade, int credits);
    double computeGPA();

};




#endif // STUDENT_H_INCLUDED
//*std::string student(std::string name, int credits, double qp);
//void addGrade(struct Student& , std::string grade, int credits);
//double computeGPA (struct Student&);

//#endif // STUDENT_H_INCLUDED


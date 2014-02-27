#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include "gradeValue.h"

class Student
{
public:
    Student();
    Student(std::string, int, double);
    void addGrade(std::string grade, int credits);
    double computeGPA();


    std::string name;
    int credits;
    double qp;

};




#endif

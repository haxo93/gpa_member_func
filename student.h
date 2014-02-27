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
        Student(std::string, int, double);
        std::string name;
        int credits;
        double qp;
        Student()
        {
            name = "";
            credits = 0;
            qp = 0;
        }
    //const GradeValue gradeValues;
    //functions
    //std::string student(std::string name,int credits, double qp);
    void addGrade(std::string grade, int credits);
    double computeGPA();

};


#endif


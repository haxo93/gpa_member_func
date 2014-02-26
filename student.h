#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

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
    void addGrade(std::string grade, int credits);
    double computeGPA();

};




#endif // STUDENT_H_INCLUDED
//*std::string student(std::string name, int credits, double qp);
//void addGrade(struct Student& , std::string grade, int credits);
//double computeGPA (struct Student&);

//#endif // STUDENT_H_INCLUDED


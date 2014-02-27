#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include "student.h"
#include "gradeValue.h"

using namespace std;

void gpaCalc (istream& input, ostream& output)
{
  string name;
  getline (input, name);
  int credits;
  double qp;
  input >> credits >> qp;
  Student student(name, credits, qp);
  string grade;
  input >> grade >> credits;
  while (grade != "0" && credits != 0)
   {
	   student.addGrade (grade, credits);
	   input >> grade >> credits;
   }
   double gpa = student.computeGPA();
   output << student.name << ' '
	  << fixed << setprecision(2) << gpa << endl;
}


int main (int argc, char** argv)
{
  // A useful "trick": The code below looks to see if
  // a command line parameter has been specified. If so,
  //     e.g.: gpaCalc fileName
  // the command line paraemter is assumed to name an input file
  // and the rest of the program reads form that file.
  // If no command parameter is given, the program reads its
  // input from cin.
  //
  // What makes this useful is that it is often easier to supply
  // input from a file during debugging, even if the program is
  // normally supposed to read from standard input (cin).

  if (argc > 1)
    {

      ifstream inputFile (argv[1]);
      gpaCalc (inputFile, cout);
    }
  else
    gpaCalc (cin, cout);
  return 0;
}


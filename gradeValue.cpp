#include "gradeValue.h"

using namespace std;

struct GradeValue {
	string  grade;
	double value;
};


const GradeValue gradeValues[] = {
		{"A", 4.0},
		{"A-", 3.7},
		{"B+", 3.3},
		{"B",  3.0},
		{"B-", 2.7},
		{"C+", 2.3},
		{"C",  2.0},
		{"C-", 1.7},
		{"D+", 1.3},
		{"D",  1.0},
		{"F",  0.0}
};

const int numGradeValues = 11;


/**
 * Search an array of GradeValues for one matching a given grade string,
 * returning the corresponding grade value. If the grade string is not in the array,
 * return the value of the last element of the array.
 *
 * @param table   an array of GradeValues
 * @param tableSize number of elements i nthe array
 * @param grade   the grade that we are searching for
 * @return  the value corresponding to that grade
 */
double findGradeValue (string grade)
{
  for (int i = 0; i < numGradeValues; ++i)
    if (gradeValues[i].grade == grade)
      return gradeValues[i].value;
  return gradeValues[numGradeValues-1].value;
}


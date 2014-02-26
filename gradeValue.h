#ifndef GRADEVALUE_H
#define GRADEVALUE_H

#include <string>

/**
 * Search an array of GradeValues for one matching a given grade string,
 * returning the corresponding grade value. If the grade string is not in the array,
 * return the value of the last element of the array.
 *
 * @param grade   the grade that we are searching for
 * @return  the value corresponding to that grade
 */
double findGradeValue (std::string grade);



#endif

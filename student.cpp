#include "student.h"
#include <string>
using std::string;

void student::setName(string firstName, string lastName)
{
    fname = firstName;
    lname = lastName;
}

string student::fullName()
{
    string name = fname + " " +  lname;
    return name;
}

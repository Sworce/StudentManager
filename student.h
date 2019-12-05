#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
using std::string;

class student 
{
    private:
            string fname;
            string lname;

    public:
            void setName(string, string);
            string fullName();

};

#endif

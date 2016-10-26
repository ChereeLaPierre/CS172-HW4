//
//  Course.hpp
//  HW 4
//
//  Created by Cheree LaPierre on /1025/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

#ifndef Course_hpp
#define Course_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Course
{
public:
    Course(const string& courseName, int capacity);
    ~Course();
    string getCourseName() const;
    void addStudent(const string& name);
    void dropStudent(const string& name);
    string* getStudents() const;
    int getNumberOfStudents() const;
    void clearStudents();
    
private:
    string courseName;
    string* students;
    int numberOfStudents;
    int capacity;
};

#endif /* Course_hpp */

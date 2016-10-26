//
//  Course.cpp
//  HW 4
//
//  Created by Cheree LaPierre on /1025/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//
#include <iostream>
#include "Course.hpp"
using namespace std;

Course::Course(const string& courseName, int capacity)
{
    numberOfStudents = 0;
    this->courseName = courseName;
    this->capacity = capacity;
    students = new string[capacity];
}

Course::~Course()
{
    delete [] students;
}

string Course::getCourseName() const
{
    return courseName;
}

// Add a student to the course and if course is full, add a spot
void Course::addStudent(const string& name)
{
    if (numberOfStudents <= capacity)
    {
        students[numberOfStudents] = name;
        numberOfStudents++;
    }
    else
    {
        capacity++;
        students[numberOfStudents] = name;
        numberOfStudents++;
    }
}

// Drop a student from a course
void Course:: dropStudent(const string& name)
{
    int dropStudent = 0;
    for (int i = 0; i < numberOfStudents; i++)
    {
        if (students[i] == name)
            dropStudent = i;
    }
    for (int i = dropStudent; i < numberOfStudents; i++)
    {
        students[i] = students[i + 1];
    }
    numberOfStudents--;
}

string* Course::getStudents() const
{
    return students;
}

int Course::getNumberOfStudents() const
{
    return numberOfStudents;
}

// Clear all students from a course
void Course::clearStudents()
{
    for (int i = 0; i <= numberOfStudents; i++)
    {
        students[i] = students[i-1];
        numberOfStudents--;
    }
}

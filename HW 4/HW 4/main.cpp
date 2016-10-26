#include <iostream>
#include "Rectangle2D.hpp"
#include "Course.hpp"
using namespace std;

void findAverage(int*, int);
void outputArray(int*, int);
int* doubleCapacity(const int* list, int size);
void printArray(const int*, const int);
void findSmallest(int*, int);

int main()
{
    // 11.1
    // Choose a size for the array
    cout << "How big of an array do you want? ";
    int arraySize;
    cin >> arraySize;
    int array[arraySize];
    // Enter values into array
    cout << "Enter the numbers for the array: ";
    for (int i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }
    // Invoke function
    findAverage(array, arraySize);
    
    // 11.3
    // Create an array and put numbers in it
    int list[5];
    for (int i = 0; i < 5; i++)
    {
        list[i] = 22;
    }
    // Create pointer to point to function
    int* k = doubleCapacity(list, 5);
    // Have function use pointer to print out new array
    printArray(k, 10);
    cout << endl;

    
    // 11.5
    // Create array with set numbers in it
    int array2[] = {1, 2, 4, 5, 10, 100, 2, -22};
    // Have function find the smallest number
    findSmallest(array2, 8);
    
    // 11. 9
    // Create three rectangles and set x, y, width, and height
    Rectangle2D r1, r2, r3;
    r1.setx1(2);
    r1.sety1(2);
    r1.setWidth1(5.5);
    r1.setHeight1(4.9);
    r2.setx1(4);
    r2.sety1(5);
    r2.setWidth1(10.5);
    r2.setHeight1(3.2);
    r3.setx1(3);
    r3.sety1(5);
    r3.setWidth1(2.3);
    r3.setHeight1(5.4);
    
    // cout area and perimeter of r1
    cout << "The area of r1 is " << r1.getArea() << " and the perimeter is " << r1.getPerimeter() << endl;
    cout << r1.contains(3, 3) << endl;
//    cout << r1.contains(r2) << endl;      // I don't know how to do this
//    cout << r1.overlaps(r3);
    
    // 11.13
    // Create two courses
    Course course1("Data Structures", 10);
    Course course2("Database Systems", 15);
    
    // Add three students to course 1 and drop 1 student from the course
    course1.addStudent("Peter Jones");
    course1.addStudent("Brian Smith");
    course1.addStudent("Anne Kennedy");
    course1.dropStudent("Steve Smith");
    
    // Add two students to course 2
    course2.addStudent("Peter Jones");
    course2.addStudent("Steve Smith");
    
    // Show students in course1
    cout << "Number of students in course1: " << course1.getNumberOfStudents() << "\n";
    string* students = course1.getStudents();
    for (int i; i < course1.getNumberOfStudents(); i++)
        cout << students[i] << ", ";
    
    // Show students in course2
    cout << "\nNumber of students in course2: " << course2.getNumberOfStudents() << "\n";
    students = course2.getStudents();
    for (int i = 0; i < course2.getNumberOfStudents(); i++)
        cout << students[i] << ", ";
    cout << endl;
    
    return 0;
}

// Function to find average of numbers in an array
void findAverage(int* list, int size)
{
    double average, sum = 0;
    // Find the average
    for (int i = 0; i < size; i++)
    {
        sum += list[i];
    }
    average = sum / size;
    cout << "The average is: " << average << endl;
    
}

// Function to double the capacity of an array and copy the numbers to it
int* doubleCapacity(const int* list, int size)
{
    if (size > 0)
    {
        int* newList = new int[size*2];
        for (int i = 0; i < size; i++)
        {
            newList[i] = list[i];
        }
        
        
        return newList;
    }
    else
    {
        return NULL;
    }
    
}

// Function to print the new array from the function above
void printArray(const int* list, const int size)
{
    for (int i = 0; i < size; i++)
        cout << list[i] << " ";
}

// Function to find the smallest number in an array
void findSmallest(int* list, int size)
{
    int smallest = list[0];
    for (int i=0; i < size; i++)
    {
        if (list[i] <= smallest && i != size)
        {
            smallest = list[i];
        }
        else if (list[i] <= smallest && i == size)
        {
            smallest = list[i];
            cout << smallest << endl;
        }
    }
    cout << "The smallest is " << smallest << endl;
}




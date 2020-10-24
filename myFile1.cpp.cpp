// myFile1.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "myFile1a.h"
#include "myFile1b.h"

int main()
{
    Course *Math = new Course(100, 60); 
    Course *ITI = new Course(200, 120); 
    Student *Yan = new Student(1, 35); 
    Student *Jane = new Student(2, 35); 

    Yan->addCourse(Math, 15); 
    Yan->addCourse(ITI, 12); 

    Jane->addCourse(Math, 8); 
    Jane->addCourse(ITI, 5); 

    cout << "The total hours of Yan is: " << Yan->totalHours() << endl; 
    cout << "The total average of Yan is: " << Yan->average() << endl << endl; 
    cout << "The total hours of Jane is: " << Yan->totalHours() << endl;
    cout << "The total average of Jane is: " << Yan->average() << endl << endl;

    delete Math; 
    delete ITI; 
    delete Yan; 
    delete Jane; 

    cout << "Enter a number to exit: " << endl; 
    return 0; 
} //closes main method 

//define the following methods for Course: 
/*constructor
* getNum: read code accessor
* getHours: read accessor to the number of hours
*/

//define the following methods for student: 
/*constructor
* destructor
* average: function that returns the average of the students grade
* totalHours: function that returns the total number of course hours the student took
* addCourse: add a course to list_course
*/


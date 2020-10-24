#pragma once
#include <iostream>
using namespace std; 

class Student {
	int numID; 
	int nbCourses; 
	int maxCourses; 
	int* List_grades; 
	Course** List_courses; 
public: 
	Student(int, int); //constructor
	~Student(); //destructor
	double average(); 
	int totalHours(); 
	bool addCourse(Course*, int); 
};

Student::Student(int stuNum, int numCourse) {
	numID = stuNum; 
	maxCourses = numCourse; 

	List_grades = new int[maxCourses]; 
	List_courses = new Course *[maxCourses]; 
} //closes constructor


Student::~Student() {
	delete List_grades, List_courses; 
} //closes destructor


double Student::average() {
	double avg = 0; 

	for (int i = 0; i < sizeof(List_grades)-1; i++) {
		avg = avg + List_grades[i]; 
	}//closes for loop

	return (avg / nbCourses); 
}//closes average calculation method 


int Student::totalHours() {
	int count = 0; 

	for (int i = 0; i < sizeof(List_courses) - 1; i++) {
		count = count + List_courses[i]->getHours(); 
	}//closes for loop

	return count; 

}//closes totalHours calculation method


bool Student::addCourse(Course* course, int grade) {
	
	if (nbCourses == maxCourses) {
		cout << "Unable to add course" << endl; 
		return false; 
	}
	else {
		List_courses[nbCourses] = course; 
		List_grades[nbCourses] = grade; 
		nbCourses++; 
		cout << "Course added successfully" << endl; 
		return true; 
	} //closes if

}//closes add course method


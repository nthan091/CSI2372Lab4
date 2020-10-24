#pragma once
#include <iostream>
using namespace std; 

class Course {
	int num; 
	int hours; 

public: 
	Course(int, int); //constructor
	int getNum(); 
	int getHours(); 
};

Course::Course(int nUm, int hOurs) {
	num = nUm; 
	hours = hOurs; 
}

int Course::getNum() {
	return num; 
}

int Course::getHours() {
	return hours; 
}
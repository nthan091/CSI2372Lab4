#pragma once
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
#include <iterator>

using namespace std;
class SetInt
{
public:
	SetInt() : elem(NULL), size(0) {};
	SetInt(int[], int);
	~SetInt();
	SetInt(const SetInt&); // copy constructor
	void add(int);
	void remove(int);
	bool contains(int);
	int nbElem();
	int* tabElem();
private:
	int* elem;
	int size;
	bool containsAux(int n, int&);
};

SetInt::SetInt(int nums[], int size) {

	size = sizeof(nums);
	elem = new int[size];
	if (elem) {
		elem = nums;
	}
}

SetInt::~SetInt() {
	delete[] elem;
}

SetInt::SetInt(const SetInt &obj) {
	elem = new int[size];
	elem = obj.elem;
}


void SetInt::add(int num) {
	int* tmp = new int[size + 1];
	if (elem == nullptr) {
		cout << "Error";
	}
	else {
		for (int i = 0; i < size; i++) {
			tmp[i] = elem[i];
		}
		size++;
		elem = tmp;
		elem[size - 1] = num;
	}

}

void SetInt::remove(int num) {
	for (int i = 0; i < sizeof(elem); i++) {
		if (elem[i] == num) {
			size = size - 1;
		}
	}
}

bool SetInt::contains(int num) {
	for (int i = 0; i < sizeof(elem); i++) {
		if (elem[i] == num) {
			return true;
		}
	}
	return false;
}

int SetInt::nbElem() {
	int count = 0;
	for (int i = 0; i < sizeof(elem); i++) {
		count++;
	}
	return count;
}

int* SetInt::tabElem() {
	if (elem == NULL) {
		return NULL;
	}
	else {
		for (int i = 0; i < sizeof(elem); i++) {
			cout << elem[i] << ", ";
		}
		return 0;
	}
}

bool SetInt::containsAux(int num, int& pos) {
	for (int i = 0; i < sizeof(elem); i++) {
		if (i == pos && elem[i] == num) {
			return true;
		}
		else {
			return false;
		}
	}
}



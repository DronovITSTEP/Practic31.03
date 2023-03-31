#pragma once
#include <iostream>
#include "Student.h"
using namespace std;

class Aspirant : public Student
{
	char* courseWork;
public:
	Aspirant(const char*, const char*, const char*, int*, int);
	Aspirant(Student& sudent, const char*);
	bool IsAdmit();
	char* Theme();
};


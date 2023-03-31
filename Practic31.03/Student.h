#pragma once
#include <iostream>
using namespace std;
/*
Создайте класс Student, который будет содержать
информацию о студенте.
С помощью механизма наследования, реализуйте класс
Aspirant (аспирант – студент, который готовится к защите
кандидатской работы) производный от Student.
*/

class Student
{
protected:
	char* name;
	char* group;
	int* marks;
	int size;

public:
	Student();
	Student(const char*, const char*);
	Student(const char*, const char*, int*, int);

	~Student();

	void SetName(const char*);
	void SetGroup(const char*);
	void SetMarks(int*);

	char* GetName() { return name; }
	char* GetGroupe() { return group; }
	int* GetMarks() { return &marks[0]; }
	int GetSize() { return size; }
	void PrintStudent();

};


#pragma once
#include <iostream>
using namespace std;
/*
�������� ����� Student, ������� ����� ���������
���������� � ��������.
� ������� ��������� ������������, ���������� �����
Aspirant (�������� � �������, ������� ��������� � ������
������������ ������) ����������� �� Student.
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


#include "Student.h"

Student::Student(const char* n, const char* g, int* m, int s) :
	name{ (n) ? new char[strlen(n) + 1] : nullptr },
	group{ (g) ? new char[strlen(g) + 1] : nullptr },
	marks{ (m) ? new int[s] : nullptr },
	size{s}
	
{
	SetName(n);
	SetGroup(g);
	SetMarks(m);
}
Student::Student(const char* n, const char* g) :
	Student(n, g, nullptr, 0) {}
Student::Student() :Student(nullptr, nullptr, nullptr, 0) {}

void Student::SetName(const char* n) {
	if (n) strcpy_s(name, strlen(n) + 1, n);
}
void Student::SetGroup(const char* g) {
	if (g) strcpy_s(group, strlen(g) + 1, g);
}
void Student::SetMarks(int* m) {
	if (m)
		for (int i = 0; i < size; i++)
			marks[i] = m[i];
}

void Student::PrintStudent() {
	cout << "Имя: " << name << ", группа: " << group
		<< endl << "Оценки: ";
	for (int i = 0; i < size; i++) {
		cout << marks[i] << " ";
	}
	cout << endl << endl;
}

Student::~Student() {
	if (name) delete[]name;
	if (group) delete[]group;
	if (marks) delete[]marks;
}
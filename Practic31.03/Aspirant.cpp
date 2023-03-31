#include "Aspirant.h"

Aspirant::Aspirant(const char* c, const char* n, 
	const char* g, int* m, int s):
	Student(n, g, m, s), courseWork{new char[strlen(c) + 1]} {
	strcpy_s(courseWork, strlen(c) + 1, c);
}
Aspirant::Aspirant(Student& student, const char* c): 
	Aspirant(c ,student.GetName(), student.GetGroupe(), 
		student.GetMarks(), student.GetSize()) {

}
bool Aspirant::IsAdmit() {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += marks[i];
	}
	return (sum / size >= 4)? true : false;
}
char* Aspirant::Theme() {
	return courseWork;
}

#pragma once
#include <iostream>
using namespace std;

class Passport {
protected:
	int number;
	int serial;
	char FIO[100];
public:
	Passport(int n, int s, const char* f):
		number{ n }, serial{ s } {
		strcpy_s(FIO, f);
	}

	void Print() {
		cout << "ФИО: " << FIO << " серия и номер: " 
			<< number << " " << serial << endl;
	}
};
class ForeignPassport : public Passport {
	char visa[50];
	int foreign_number;
public:
	ForeignPassport(int n, int s, const char* f, const char* v, int fn) :
		Passport(n, s, f), foreign_number{ fn } {
		strcpy_s(visa, v);
	}
	void Print() {
		Passport::Print();
		cout << "номер загран.паспорта: " << foreign_number <<
			" виза: " << visa << endl;
	}
};
#include <iostream>
#include "Student.h"
#include "Aspirant.h"

#include "Passport.h"
using namespace std;
/*
Создайте класс Passport (паспорт), который будет содержать
паспортную информацию о гражданине России.
С помощью механизма наследования, реализуйте класс
ForeignPassport (загран.паспорт) производный от Passport.
Напомним, что заграничный паспорт содержит помимо паспортных данных, 
также данные о визах, номер заграничного паспорта.
*/

int main()
{
    setlocale(LC_ALL, "");
    int size = 4;

    /*Student student{ 
        "Петров П. П." , 
        "группа 2",
        new int[size] {5,7,3,2},
        size
    };

    Aspirant aspirant{ 
        "ООП", 
        "Иванов И. И.", 
        "группа 1", 
        new int[5] {5,3,4,5,5},
        5
    };
    cout << "Информация о студенте\n";
    aspirant.PrintStudent();
    cout << "Допущен ли студент до экзамена? ";
    (aspirant.IsAdmit()) ? cout << "Да" : cout << "Нет";
    cout << endl;
    cout << "Курсовая работа студента " << aspirant.GetName()
        << " " << aspirant.Theme() << endl << endl;

    Aspirant aspirant1{
        student, "C++"
    };
    cout << "Информация о студенте\n";
    aspirant1.PrintStudent();
    cout << "Допущен ли студент до экзамена? ";
    (aspirant1.IsAdmit()) ? cout << "Да" : cout << "Нет";
    cout << endl;
    cout << "Курсовая работа студента " << aspirant1.GetName()
        << " " << aspirant1.Theme();*/

    ForeignPassport fPass{ 1234, 123456789,"Иванов И. И.",
    "Греция", 456987123 };

    fPass.Print();
}
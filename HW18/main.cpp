#include <iostream>
#include <cstring>
#include "Name.h"
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    EmpL employees[5]; 
    
    strcpy_s(employees[0].lastName, "Иванов");
    employees[0].birthYear = 1945;
    strcpy_s(employees[0].position, "Инженер");
    employees[0].salary = 50000.0;
    strcpy_s(employees[0].education, "Высшее техническое");

    strcpy_s(employees[1].lastName, "Петров");
    employees[1].birthYear = 1990;
    strcpy_s(employees[1].position, "Менеджер");
    employees[1].salary = 60000.0;
    strcpy_s(employees[1].education, "Высшее экономическое");

    strcpy_s(employees[2].lastName, "Сидоров");
    employees[2].birthYear = 1988;
    strcpy_s(employees[2].position, "Программист");
    employees[2].salary = 70000.0;
    strcpy_s(employees[2].education, "Высшее техническое");

    strcpy_s(employees[3].lastName, "Козлов");
    employees[3].birthYear = 1925;
    strcpy_s(employees[3].position, "Аналитик");
    employees[3].salary = 55000.0;
    strcpy_s(employees[3].education, "Высшее математическое");

    strcpy_s(employees[4].lastName, "Морозов");
    employees[4].birthYear = 1910;
    strcpy_s(employees[4].position, "Дизайнер");
    employees[4].salary = 45000.0;
    strcpy_s(employees[4].education, "Высшее художественное");

    for (int i = 0; i < 5; i++) {
        cout << "Работник " << i + 1 << endl;
        cout << "Фамилия: " << employees[i].lastName << endl;
        cout << "Год рождения: " << employees[i].birthYear << endl;
        cout << "Должность: " << employees[i].position << endl;
        cout << "Зарплата: " << employees[i].salary << endl;
        cout << "Образование: " << employees[i].education << endl;
        cout << std::endl;
    }

    int olderThan60Count = 0;

    for (int i = 0; i < 5; i++) {
        int age = 2023 - employees[i].birthYear;
        if (age > 60) {
            olderThan60Count++;
            cout << "Работник " << i + 1 << endl;
            cout << "Фамилия: " << employees[i].lastName << endl;
            cout << "Год рождения: " << employees[i].birthYear << endl;
            cout << "Должность: " << employees[i].position << endl;
            cout << "Зарплата: " << employees[i].salary << endl;
            cout << "Образование: " << employees[i].education << endl << endl;
        }
    }

    cout << "Количество работников старше 60 лет: " << olderThan60Count << endl;

    return 0;
}
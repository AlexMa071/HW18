#include <iostream>
#include <cstring>
#include "Name.h"
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    EmpL employees[5]; 
    
    strcpy_s(employees[0].lastName, "������");
    employees[0].birthYear = 1945;
    strcpy_s(employees[0].position, "�������");
    employees[0].salary = 50000.0;
    strcpy_s(employees[0].education, "������ �����������");

    strcpy_s(employees[1].lastName, "������");
    employees[1].birthYear = 1990;
    strcpy_s(employees[1].position, "��������");
    employees[1].salary = 60000.0;
    strcpy_s(employees[1].education, "������ �������������");

    strcpy_s(employees[2].lastName, "�������");
    employees[2].birthYear = 1988;
    strcpy_s(employees[2].position, "�����������");
    employees[2].salary = 70000.0;
    strcpy_s(employees[2].education, "������ �����������");

    strcpy_s(employees[3].lastName, "������");
    employees[3].birthYear = 1925;
    strcpy_s(employees[3].position, "��������");
    employees[3].salary = 55000.0;
    strcpy_s(employees[3].education, "������ ��������������");

    strcpy_s(employees[4].lastName, "�������");
    employees[4].birthYear = 1910;
    strcpy_s(employees[4].position, "��������");
    employees[4].salary = 45000.0;
    strcpy_s(employees[4].education, "������ ��������������");

    return 0;
}
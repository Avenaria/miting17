//main.cpp
#include "baza.h"
#include "baza.cpp"
#include<iostream>

void main()
{
    setlocale(LC_ALL, "Russian");


    database bd;

    for (int i = 0; i < 6; ++i)
        bd.Add(rand() % 9000 + 1000);

    bd.PrintAll(bd.ReturnRoot(), 0);
    cout << "------------------------------------------------------------------\n";
    bd.Add(5555);
    bd.PrintAll(bd.ReturnRoot(), 0);
    cout << "------------------------------------------------------------------\n";

    cout << "Введите номер машины: ";
    int num;
    cin >> num;
    bd.PrintNumber(num);
}
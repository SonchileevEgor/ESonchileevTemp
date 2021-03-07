//
// Created by Egor on 06.03.2021.
//
#pragma once

#include <iostream>

using namespace std;

class Town {

    //Поля класса.
    string _name;
    int _citizen_count;
    double _average_earning;

public:
    //Конструктор по умолчанию
    Town();

    //Конструктор с параметрами
    Town(string name, int ctz_cnt, double avg_earn);

    //Конструктор копирования
    Town(const Town& other);

    //Геттеры и сеттеры
    const string &getName() const;

    void setName(const string &name);

    int getCitizenCount() ;

    void setCitizenCount(int citizenCount);

    double getAverageEarning() const;

    void setAverageEarning(double averageEarning);

    //Метод печати.
    void print();

    //Деструктор.
    virtual ~Town();
};
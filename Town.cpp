//
// Created by Egor on 06.03.2021.
//

#include "Town.h"

Town::Town() {
    _name="";
    _citizen_count=0;
    _average_earning=0;
}

Town::~Town() {}

Town::Town(string name, int ctz_cnt, double avg_earn) {
    _name=name;
    _citizen_count=ctz_cnt;
    _average_earning=avg_earn;
}

Town::Town(const Town& other) {
    _name=other._name;
    _citizen_count=other._citizen_count;
    _average_earning=other._average_earning;
}

const string &Town::getName() const {
    return _name;
}

void Town::setName(const string &name) {
    _name = name;
}

int Town::getCitizenCount()  {
    return _citizen_count;
}

void Town::setCitizenCount(int citizenCount) {
    _citizen_count = citizenCount;
}

double Town::getAverageEarning() const {
    return _average_earning;
}

void Town::setAverageEarning(double averageEarning) {
    _average_earning = averageEarning;
}

void Town::print() {
    cout<<"\nНазвание города: "<<_name
        <<"\nКоличество жителей: "<<_citizen_count
        <<"\nСредний заработок: "<<_average_earning
        <<'\n';
}

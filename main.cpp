#include "Town.h"

int main() {

    system("chcp 65001");

    string name;
    int citizen_count;
    double average_earning;

    //Создадим пустой объект класса Town, используя конструктор по умолчанию.
    Town town = Town();
    //Покажем что он создался пустым.
    town.print();

    //Создадим ещё один объект класса, используя конструктор с параметрами.
    //Значения полей запросим у пользователя.
    cout << "Введите город:\n";
    cin >> name >> citizen_count >> average_earning;
    Town town1 = Town(name, citizen_count, average_earning);
    //Выведем созданный объект.
    town1.print();

    //Создадим ещё один объект класса, используя конструктор копирования.
    //В качестве параметра передадим town1.
    Town town2 = Town(town1);
    //Выведем созданный объект.
    town2.print();

    //Изменим имя города town1, используя сеттер, и
    //получим новые данные о его имени, используя геттер.
    cout<<"Введите новое название города:\n";
    cin>>name;
    town1.setName(name);
    cout<<"Новое название города:\n"<<town1.getName();


    //Создадим указатель на компонет-функцию getCitizenCount().
    int (Town:: * ptr) ();
    ptr = &Town::getCitizenCount;
    //Вывод количества жителей town1 используя указатель ptr.
    cout << "\nКоличество жителей town1:\n" << (town1.*ptr)();

    //Создадим указатель на экземпляр класса town2.
    Town* ptr1 = &town2;
    cout << "\nГород town2:\n";
    ptr1->print();

    //Выведем данные о среднем заработке всех городов.
    cout<<"\nСредние заработки в городах:\n"
        <<"town: "<<town.getAverageEarning()
        <<"\ntown1: "<<town1.getAverageEarning()
        <<"\ntown2: "<<town2.getAverageEarning();

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

struct Car {
    double length;
    double clearance;
    double engineVolume;
    double enginePower;
    double wheelDiameter;
    string color;
    string transmissionType;
};

void setCarValues(Car& car) {
    cout << "Введіть довжину автомобіля: ";
    cin >> car.length;

    cout << "Введіть кліренс (висоту посадки) автомобіля: ";
    cin >> car.clearance;

    cout << "Введіть об'єм двигуна автомобіля: ";
    cin >> car.engineVolume;

    cout << "Введіть потужність двигуна автомобіля: ";
    cin >> car.enginePower;

    cout << "Введіть діаметр коліс автомобіля: ";
    cin >> car.wheelDiameter;

    cout << "Введіть колір автомобіля: ";
    cin >> car.color;

    cout << "Введіть тип коробки передач автомобіля: ";
    cin >> car.transmissionType;
}

void printCarValues(Car car) {
    cout << "Довжина автомобіля: " << car.length << endl;
    cout << "Кліренс (висота посадки) автомобіля: " << car.clearance << endl;
    cout << "Об'єм двигуна автомобіля: " << car.engineVolume << endl;
    cout << "Потужність двигуна автомобіля: " << car.enginePower << endl;
    cout << "Діаметр коліс автомобіля: " << car.wheelDiameter << endl;
    cout << "Колір автомобіля: " << car.color << endl;
    cout << "Тип коробки передач автомобіля: " << car.transmissionType << endl;
}

void searchCarValues(Car car, string value) {
    if (car.color == value) {
        cout << "Знайдено автомобіль з кольором " << value << endl;
    }
    else {
        cout << "Автомобіль з кольором " << value << " не знайдено" << endl;
    }
}

int main() {
    Car car;

    setCarValues(car);
    printCarValues(car);

    string searchValue;
    cout << "Введіть колір для пошуку: ";
    cin >> searchValue;

    searchCarValues(car, searchValue);

    return 0;
}
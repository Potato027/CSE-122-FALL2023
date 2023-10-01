#include <iostream>

using namespace std;

class Vehicle {
protected:
    int wheels;
    int range;

public:
    Vehicle(int wheels, int range) : wheels(wheels), range(range) {}

    void displayInfo() {
        cout << "Wheels: " << wheels << endl;
        cout << "Range: " << range << " miles" << endl;
    }
};

class Car : public Vehicle {
private:
    int passengers;

public:
    Car(int wheels, int range, int passengers) : Vehicle(wheels, range), passengers(passengers) {}

    void displayInfo() {
        cout << "Car:" << endl;
        Vehicle::displayInfo();
        cout << "Passengers: " << passengers << endl;
    }
};

class Truck : public Vehicle {
private:
    int loadLimit;

public:
    Truck(int wheels, int range, int loadLimit) : Vehicle(wheels, range), loadLimit(loadLimit) {}

    void displayInfo() {
        cout << "Truck:" << endl;
        Vehicle::displayInfo();
        cout << "Load Limit: " << loadLimit << " lbs" << endl;
    }
};

int main() {
    int carwheel, carrange, carpassenger;
    int truckwheel, truckrange, truckLoadLimit;



    cin >> carpassenger >> carwheel >> carrange;

    cin >>truckrange >> truckwheel >> truckLoadLimit;

    Car c(carwheel, carrange, carpassenger);
    Truck t(truckwheel, truckrange, truckLoadLimit);

    cout << "Car:" << endl;
    c.displayInfo();
    cout << endl;

    cout << "Truck:" << endl;
    t.displayInfo();

    return 0;
}

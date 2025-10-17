#include<iostream>
using namespace std;

class Vehicle{
public:
    virtual void calculateRentalCost(int daysRented) = 0;
    virtual void specialFeature()
    {
        cout << "Special Feature : No Special Feature." << endl;
    }
};

class Car : public Vehicle{
public:
    void calculateRentalCost(int daysRented) override
    {
        cout << "Rental cost of CAR  for " << daysRented << " days = " << 50*daysRented << endl;
    }

};

class Truck : public Vehicle{
private:
    int cargoCapacity;
public:
    Truck(int capacity) : cargoCapacity(capacity) {}
    void calculateRentalCost(int daysRented) override
    {
        cout << "Rental cost of Truck for " << daysRented << " days = " << " and with " << cargoCapacity << " cargoCapacity" << " = " << (80+10*cargoCapacity)*daysRented << endl;
    }

};

class Convertible : public Vehicle{
public:
    void calculateRentalCost(int daysRented) override
    {
        cout << "Rental cost of Convertible for " << daysRented << " days = " << 60*daysRented << endl;
    }
    void specialFeature() override
    {
        cout << "It has a Retractable roof feature." << endl;
        cout << endl;
    }
};


int main(){
    Car c1;
    Truck t1(20);
    Convertible ct1;
    Vehicle *v[] = {&c1, &t1, &ct1};

    for(int i=0; i<3; i++){
        v[i]->calculateRentalCost(3);
        v[i]->specialFeature();
        cout << endl;
    }

}

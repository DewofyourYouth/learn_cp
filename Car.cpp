#include <iostream>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int year;

public:
    void printCarData()
    {
        cout << "{ brand: " << brand << ", model: " << model << ", year: " << year << " }\n";
    }
    Car(string x, string y, int z)
    {
        brand = x;
        model = y;
        year = z;
    }
};
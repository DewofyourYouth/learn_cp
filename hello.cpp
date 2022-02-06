#include <iostream>
#include "Car.cpp"
using namespace std;

int addNums(int a, int b)
{
    return a + b;
}

int main()
{
    string name;
    Car myBMW("BMW", "X5", 1999);
    Car myTesla("Tesla", "S5", 2022);
    int a = 12;
    int b = 23;
    int c = 34;
    cout << "What is your name? ";
    getline(cin, name);
    // for (int i = 0; i < name.size(); i++)
    // {
    //     cout << "[" << i << "]: " << name[i] << "\n";
    // }
    cout << "Hello " << name << "!\n";
    cout << addNums(c, b) << "\n";
    cout << addNums(a, b) << "\n";
    myBMW.printCarData();
    myTesla.printCarData();
    return 0;
}
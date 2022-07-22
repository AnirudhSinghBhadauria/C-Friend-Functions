#include <iostream>

using namespace std;

class car
{

public:
    int innova;
    int swift;

    static int ride;

    car()
    {
        innova = 10;
        swift = 40;
        ride++;
    }
};

int car ::ride = 0;

int main()
{

    car c1, c2;

    cout<<"Value of innova for c1 ----> " << c1.innova<<endl;
    cout<<"Value of swift for c1 ----> " << c1.swift<<endl;
    cout<<"Value of innova for c2 ----> " << c2.innova<<endl;
    cout<<"Value of swift for c2 ----> " << c2.swift<<endl;
    cout<<"value of ride after being created for these two objects ----> " << c1.ride<<endl;

    c2.ride = 23;

    cout<<"Now C! and c2 hava same value of ride for them as they share it ----> "<<c2.ride<<endl;
    cout<<"Now C! and c2 hava same value of ride for them as they share it ----> "<<c1.ride;

    return 0;
}
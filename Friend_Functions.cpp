#include <iostream>

using namespace std;

class parent
{
    int a = 10;

protected:
    int b = 20;

public:
    int c = 80;

    friend void fun();
};
void fun()
{
    parent p;
    p.a = 11;
    p.b = 12;
    p.c = 13;
    cout<<"Value of a is ----> " << p.a << endl;
    cout<<"Value of b is ----> " << p.b << endl;
    cout<<"Value of c is ----> " << p.c << endl;
}

int main()
{
    fun();
    return 0;
}
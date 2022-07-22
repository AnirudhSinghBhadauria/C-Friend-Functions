#include <iostream>

using namespace std;

class parent2;
class parent
{
private:
    int a;

protected:
    int b;

public:
    int c;

    friend parent2;
};

class parent2
{
public:
    parent p;
    void display()
    {
        p.a = 10;
        p.b = 40;
        p.c = 60;
    }
};

int main()
{

    return 0;
}

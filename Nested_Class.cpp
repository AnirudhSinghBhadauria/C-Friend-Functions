#include <iostream>

using namespace std;

class outer
{
public:
    void display()
    {
        i.show(); //----> outer class can access inner class objects !!
    }
    class inner
    {
    public:
        void show()
        {
            cout << "This is inner Class !";
        }
    };

    inner i; //---->inner class object can only be defiend afer definition of the inner class
};

int main()
{
    outer :: inner i;

    i.show();
    outer j;
    j.display();
   
    return 0;
}


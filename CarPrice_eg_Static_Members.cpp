#include <iostream>

using namespace std;

class innova
{
    static int price;

public:
    innova()
    {
    }
    static int getPrice()
    {
        return price;
    }
};

int innova ::price = 1700000;

int main()
{
    cout << "Price of Innova is ----> 'Rs." << innova::getPrice() << "'\n";
    //its like asking the price of innova without buying it ,, makes sense !!

    // innova i;
    // cout<<i.price;
    return 0;
}
#include <iostream>

using namespace std;

class student
{
public:
    int chair;
    int desk;
    static int pen;

    student()
    {
        chair = 40;
        desk = 34;
        pen++;
    }

    static int getPen()
    {
        return pen;
    }
};

int student ::pen = 0;

int main()
{

    student s1, s2;

    cout<<"Value of Static Data member 'Pen' after being Created for 's1' and 's2' ----> " << student::getPen()<<endl;
    s1.pen = 70;
    cout<<"Value of S1.Pen after updating 'S1.pen' ----> "<<s1.getPen()<<endl;
    cout<<"Value of S2.Pen after updating 'S1.pen' ----> "<<s2.getPen()<<endl;


    //VALUE OF S1 CHANGED AS I CHANGED IT BUT S2 ALSO GOT CHANGED AS PEN IS A STATIC VARIABLE   
    return 0;
}
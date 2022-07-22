#include <iostream>
#include <string>

using namespace std;

class student
{
public:
    string name;
    int rollno;
    static int admno; 

    student(string n)
    {
        admno++;
        rollno = admno;
        name = n;
    }

    void info()
    {
        cout << "\n\nName of the Student is ----> '" << name << "'\n";
        cout << "Roll Number of the Student is ----> '" << rollno << "'\n\n";
    }
};

int student ::admno = 0;

int main()
{
    student s2("Shiven Kumar Mishra");
    student s3("Aditya Pandey");
    student s1("Anirudh Singh Bhadauria");
    student s4("Ishank Rajiv Pathak");
    s2.info();
    s3.info();
    s1.info();
    s4.info();
    cout << "Number of Admission so far : " << student::admno<<"\n\n";

    return 0;
}



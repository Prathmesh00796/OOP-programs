#include<iostream>
using namespace std;

class Student
{
    int roll_no;
    string name;
    
public:
    void getinfo(int rn, string nm)
    {    
        roll_no = rn;
        name = nm;
    }

    void display();
};

void Student::display()
{
    cout << roll_no << endl;
    cout << name << endl;
}

int main()
{
    Student s;
    s.getinfo(7, "Thala");
    s.display();
}

#include <iostream>
using namespace std;

class A {
public:
    int a;
    void get1() {
        cout << "\nEnter 1st number: ";
        cin >> a;
    }
};

class B : public A {
public:
    int b;
    void get2() {
        cout << "\nEnter 2nd number: ";
        cin >> b;
    }
};

class C : public B {
public:
    void sum() {
        cout << "\nAddition: " << a + b;
    }
};

int main() {
    C obj;
    obj.get1();
    obj.get2();
    obj.sum();
    return 0;
}

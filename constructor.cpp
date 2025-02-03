#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle() {
        radius = 1.0;
    }

    Circle(double r) {
        radius = r;
    }

    Circle(const Circle &c) {
        radius = c.radius;
    }

    ~Circle() {}

    double area() {
        return M_PI * radius * radius;
    }

    double circumference() {
        return 2 * M_PI * radius;
    }

    void display() {
        cout << "Radius: " << radius << ", Area: " << area() << ", Circumference: " << circumference() << endl;
    }
};

int main() {
    Circle c1;
    c1.display();

    Circle c2(5.0);
    c2.display();

    Circle c3 = c2;
    c3.display();

    return 0;
}

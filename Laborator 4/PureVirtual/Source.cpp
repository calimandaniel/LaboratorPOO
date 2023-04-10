#include <iostream>

class Shape {
public:
    virtual double getArea() = 0;
//protected:
//    Shape() {};
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getArea() override {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double getArea() override {
        return width * height;
    }
};

int main() {
    /*Shape s;
    std::cout << s.getArea() << std::endl;*/

    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 6.0);

    std::cout << "Area of Circle: " << shape1->getArea() << std::endl;
    std::cout << "Area of Rectangle: " << shape2->getArea() << std::endl;

    delete shape1;
    delete shape2;

    return 0;
}
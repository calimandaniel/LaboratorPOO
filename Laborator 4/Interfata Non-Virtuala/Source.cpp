#include <iostream>

class Shape {
public:
    virtual ~Shape() {}

    void draw() {
        doDraw();
        std::cout << "Drawn!" << std::endl;
    }

    void rotate(double angle) {
        doRotate(angle);
        std::cout << "Rotated!" << std::endl;
    }

private:
    virtual void doDraw() = 0;
    virtual void doRotate(double angle) = 0;
};

class Circle : public Shape {
public:
    void setRadius(double radius) {
        m_radius = radius;
    }

private:
    void doDraw() override {
        std::cout << "Drawing a circle with radius " << m_radius << "." << std::endl;
    }

    void doRotate(double angle) override {
        std::cout << "Rotating a circle by " << angle << " degrees." << std::endl;
    }

    double m_radius = 1.0;
};

class Square : public Shape {
public:
    void setSideLength(double sideLength) {
        m_sideLength = sideLength;
    }

private:
    void doDraw() override {
        std::cout << "Drawing a square with side length " << m_sideLength << "." << std::endl;
    }

    void doRotate(double angle) override {
        std::cout << "Rotating a square by " << angle << " degrees." << std::endl;
    }

    double m_sideLength = 1.0;
};

int main() {
    Circle c;
    c.setRadius(2.0);
    c.draw(); 
    c.rotate(45.0); 

    Square s;
    s.setSideLength(3.0);
    s.draw(); 
    s.rotate(90.0);

    return 0;
}

#include <iostream>

//Mainly used for utils/helper classes where you don't need an actual instance for to use the class methods
//Static methods can't access non static member variables
class MathHelper {
public:
    static double add(double a, double b) {
        return a + b;
    }

    static double subtract(double a, double b) {
        return a - b;
    }

    static double divide(double a, double b) {
        if (b == 0) {
            std::cerr << "Cannot divide by zero!" << std::endl;
            return 0;
        }
        return a / b;
    }

    static int modulo(int a, int b) {
        if (b == 0) {
            std::cerr << "Cannot take modulo by zero!" << std::endl;
            return 0;
        }
        return a % b;
    }
};

class MyNumber {
private:
    double value1, value2;

public:
    MyNumber(double v1, double v2) : value1(v1), value2(v2) {}

    double addMethod() {
        return MathHelper::add(value1, value2);
    }

    double subtractMethod() {
        return MathHelper::subtract(value1, value2);
    }

    double divideMethod() {
        return MathHelper::divide(value1, value2);
    }

    int moduloMethod() {
        return MathHelper::modulo((int)value1, (int)value2);
    }

    void printValue() {
        std::cout << "The value1 is: " << value1 << ". The value2 is: " << value2 << std::endl;
    }
};

int main() {
    MyNumber num1(10.0, 4.0);

    std::cout << "Sum value is: " << num1.addMethod() << std::endl;
    std::cout << "Subtracted value is: " << num1.subtractMethod() << std::endl;
    std::cout << "Divide value is: " << num1.divideMethod() << std::endl;
    std::cout << "Modulo value is: " << num1.moduloMethod() << std::endl;

    return 0;
}

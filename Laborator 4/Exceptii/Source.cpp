#include <stdexcept>
#include <string>
#include <iostream>

class CustomException : public std::out_of_range {
public:
    CustomException(const std::string& msg) : std::out_of_range(msg) {}
};

//int main() {
//    std::string str = "Hello, world!";
//    try {
//        int arr[] = { 1, 2, 3 };
//        int index = 5;
//        if (index >= sizeof(arr) / sizeof(arr[0])) {
//            throw CustomException("Index out of range!");
//        }
//        std::cout << arr[index] << std::endl;
//    }
//    catch (const CustomException& ex) {
//        std::cout << "Caught CustomException exception: " << ex.what() << std::endl;
//    }
//    catch (const std::exception& ex) {
//        std::cout << "Caught generic std::exception: " << ex.what() << std::endl;
//    }
//    return 0;
//}

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int den) {
        if (den == 0) {
            throw std::invalid_argument("denominator cannot be zero");
        }

        numerator = num;
        denominator = den;
    }

    double toDecimal() {
        return static_cast<double>(numerator) / denominator;
    }
};

int main() {
    try {
        Fraction f(3, 0);
        std::cout << "Fraction as decimal: " << f.toDecimal() << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
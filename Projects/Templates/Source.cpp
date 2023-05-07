#include <iostream>



template<typename T>
void print(T value) {
    std::cout << "Value: " << value << std::endl;
}

//template functions are initialized only when you use them
//typename - specifies that a template definition or declaration is a type
template <typename T>
T add(T a, T b) {
    return a + b;
}

//
//int add(int a, int b) {
//    return a + b;
//}
//
//double add(double a, double b) {
//    return a + b;
//}

int main() {
    std::cout << add(1, 2) << std::endl;
    std::cout << add(3.14, 2.71) << std::endl;
    print(42);
    return 0;
}
#include <iostream>

// class template with primary template
template<typename T>
class MyContainer {
public:
    void add(T value) {
        std::cout << "Adding value to generic container" << std::endl;
    }
};

// partial specialization for int type
template<>
class MyContainer<int> {
public:
    void add(int value) {
        std::cout << "Adding integer value to specialized container" << std::endl;
    }
};

int main() {
    MyContainer<double> myDoubleContainer;
    myDoubleContainer.add(3.14);

    MyContainer<int> myIntContainer;
    myIntContainer.add(42);

    return 0;
}
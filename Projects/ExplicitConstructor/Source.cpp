#include <iostream>

class MyInt {
public:
    /*explicit*/ MyInt(int value) : m_value(value) {}

    int getValue() const {
        return m_value;
    }

private:
    int m_value;
};

void doSomething(MyInt myInt) {
    std::cout << myInt.getValue() << std::endl;
}

int main() {
    doSomething(42);  // implicit conversion from int to MyInt
    return 0;
}

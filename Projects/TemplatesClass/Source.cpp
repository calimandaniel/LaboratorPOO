#include <iostream>

template<typename T, typename U>
class MyPair {
private:
    T first;
    U second;
public:
    MyPair(T first, U second) {
        this->first = first;
        this->second = second;
    }
    void print() {
        std::cout << "First: " << first << ", Second: " << second << std::endl;
    }
};

int main() {
    MyPair<int, std::string> myPair(42, "Hello");
    MyPair<std::string, int> myPair2("My String", 90);
    myPair.print();
    myPair2.print();
    return 0;
}
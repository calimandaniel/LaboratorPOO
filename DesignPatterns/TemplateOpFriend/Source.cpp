#include <iostream>

template <typename T>
class cls {
    T info;
public:
    cls(const T& x);
    friend std::ostream& operator<<(std::ostream& o, const cls<T>& c) {
        o << c.info;
        return o;
    }
};

template <typename T>
cls<T>::cls(const T& x) : info(x) {}

int main() {
    cls<int> c(5);
    std::cout << c;
}
#include <iostream>
#include <array>

template <typename T, int N>
class Array {
private:
    T m_Array[N];
public:
    int GetSize() const { return N; }
};

int main() {
    Array<std::string, 50> array;
    std::cout << array.GetSize() << std::endl;
    return 0;
}

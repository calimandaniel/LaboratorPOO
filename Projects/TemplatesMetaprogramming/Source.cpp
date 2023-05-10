#include <iostream>
#include <array>

//Template metaprogramming takes more time at compile time in order to save time at runtime
/*template <typename T, int N>
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
}*/


template <int N>
struct Fibonacci {
    static constexpr int value = Fibonacci<N - 1>::value + Fibonacci<N - 2>::value;
};

template <>
struct Fibonacci<0> {
    static constexpr int value = 0;
};

template <>
struct Fibonacci<1> {
    static constexpr int value = 1;
};

int main()
{
    constexpr int fib = Fibonacci<6>::value;
    std::cout << fib;
}
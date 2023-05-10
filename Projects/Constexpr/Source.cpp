#include <iostream>

//constexpr int product(int x, int y) { return (x * y); }
//
//int main()
//{
//    constexpr int x = product(10, 20);
//    std::cout << x;
//    return 0;
//}

constexpr int product(int x, int y) { return (x * y); }

int main()
{
    int arr[product(2, 3)] = { 1, 2, 3, 4, 5, 6 };
    std::cout << arr[5];
    return 0;
}
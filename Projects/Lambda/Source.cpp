#include <iostream>
#include <vector>
#include <algorithm>
//
//int main() {
//    auto multiply = [](int a, int b) {
//        return a * b;
//    };
//
//    std::cout << "3 * 4 = " << multiply(3, 4) << std::endl;
//
//    return 0;
//}

int main() {
    int x = 5;
    int y = 3;

    auto compute = [x, &y](int z) {
        y *= 2;
        return x + y + z;
    };

    int z = 2;
    std::cout << "Result = " << compute(z) << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "z = " << z << std::endl;

    return 0;
}

//int main() {
//    std::vector<int> vec = { 1, 2, 3, 4, 5 };
//    int sum = 0;
//
//    auto add = [&sum](int x) { sum += x; };
//
//    std::for_each(vec.begin(), vec.end(), add);
//
//    std::cout << "The sum of the vector is: " << sum << std::endl;
//
//    return 0;
//}

//int main() {
//    std::vector<std::string> words = { "apple", "banana", "cherry", "date", "elderberry" };
//
//    
//    auto sort_descending = [](const std::string& a, const std::string& b) {
//        return a > b;
//    };
//
//    
//    std::sort(words.begin(), words.end(), sort_descending);
//
//   
//    std::cout << "Sorted vector in descending order: ";
//    for (const auto& word : words) {
//        std::cout << word << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}
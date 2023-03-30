#include <iostream>

class Baza {
private:
    int x, y;
public:
    //Baza() { std::cout << "Constructor fara parametru"; }
    Baza(int x_) : x(x_) { std::cout << "Constructor Bază\n"; }
    ~Baza() { std::cout << "Destructor Bază\n"; }
};

class Derivata : Baza {
public:
    Derivata(const Baza& b) : Baza(b) { std::cout << "Constructor 3 Derivată\n"; }
    ~Derivata() { std::cout << "Destructor Derivată\n"; }
};

int main() {
    Baza b(2);
    std::cout << "main: După b, înainte de d\n";
    Derivata d(2);
    std::cout << "main: sfârșit\n";
}
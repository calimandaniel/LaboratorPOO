#include <iostream>

class Baza {
private:

   
protected:
    int x=7;
    int y=6;
    
public:
    int z=4;
    void f1() { std::cout << "f1\n"; }
    void f3() { std::cout << "f3\n"; }
    void f2() { std::cout << "f2\n"; }
};

class Derivata : private Baza {
public:
    void g() {
        f1();
        f2();
        f3();
        std::cout << x << "\n";
        std::cout << y << "\n";
        std::cout << z << "\n";
    }
};

int main() {
    Baza b;
    b.f1();
    b.f2();
    b.f3();
    std::cout << "---\n";
    Derivata d;
    d.g();
    /*d.f1();
    d.f2();
    d.f3();*/
}
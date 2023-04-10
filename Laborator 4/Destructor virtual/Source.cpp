#include <iostream>

class Base
{
public:
    Base() {
        std::cout << "Base Constructor Called\n";
    }
    virtual ~Base() {
        std::cout << "Base Destructor called\n";
    }
};

class Derived : public Base
{
public:
    Derived() {
        m_Vec = new int[5];
        std::cout << "Derived constructor called\n";
    }
    ~Derived() {
        std::cout << "Derived destructor called\n";
        delete[] m_Vec;
    }
private:
    int* m_Vec;
};

int main()
{
    Base* base = new Base();
    delete base;

    std::cout << "-------------\n";

    Derived* derived = new Derived();
    delete derived;

    std::cout << "-------------\n";

    Base* b = new Derived();
    delete b;
}
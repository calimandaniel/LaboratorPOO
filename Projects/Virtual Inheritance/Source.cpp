#include <iostream>
using namespace std;

class A {
public:
    A()
    {
        cout << "Print class A" << std::endl;
    }
    void print()
    {
        std::cout << "Simple base class print" << std::endl;
    }
};


//Derived classes that inherit from the base class has to virtually inherit in order to not call the base class twice
class B : virtual public A {
public:
    B()
    {
        cout << "Print class B" << std::endl;
    }
};

class C : virtual public A {
public:
    C()
    {
        cout << "Print class C" << std::endl;
    }
};

class D : public B, public C {
public:
    D()
    {
        cout << "Print class D" << std::endl;
    }
};

int main()
{
    D object;
    object.print();
}
#include <iostream>

class Base {
public:
    virtual void print() {
        std::cout << "Printing from Base" << std::endl;
    }
};

class Derived : public Base {
public:
    void print() override {
        std::cout << "Printing from Derived" << std::endl;
    }
};

int main() {
    //Base* baseDerived = new Derived();

    //// Regular Cast
    //Derived* derived1 = (Derived*)baseDerived;
    //derived1->print();

    //// Dynamic Cast
    //Derived* derived2 = dynamic_cast<Derived*>(baseDerived);
    //derived2->print();

    //// Static Cast
    //Derived* derived3 = static_cast<Derived*>(baseDerived);
    //derived3->print();

    //delete baseDerived;


    //Base* base = new Base();
    //Derived* derived1 = (Derived*)base; // Undefined behavior
    //derived1->print();




    //Base* base = new Base();
    //Derived* derived2 = dynamic_cast<Derived*>(base); // Returns nullptr
    //if (derived2 != nullptr) {
    //    derived2->print();
    //}
    //else {
    //    std::cout << "Failed to cast to Derived pointer" << std::endl;
    //}


    //Base* base = new Base();
    //Derived* derived3 = static_cast<Derived*>(base); // Undefined behavior
    //derived3->print();



}

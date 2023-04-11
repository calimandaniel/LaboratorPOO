#include <iostream>
#include <memory>
#include <typeinfo>

class Base {
public:
    virtual void print() { std::cout << "This is a Base object." << std::endl; }
};

class Derived : public Base {
public:
    void print() override { std::cout << "This is a Derived object." << std::endl; }
};

class AnotherDerived : public Base {
public:
    void print() override { std::cout << "This is another Derived object." << std::endl; }
};

int main() {
    std::unique_ptr<Base> b = std::make_unique<AnotherDerived>();

    //Derived* d = dynamic_cast<Derived*>(b.get());
    //if (d != nullptr) {
    //    std::cout << "Dynamic casting successful." << std::endl;
    //    d->print(); 
    //}
    //else {
    //    std::cout << "Dynamic casting failed." << std::endl;
    //}

    /*AnotherDerived* ad = dynamic_cast<AnotherDerived*>(b.get());

    if (ad != nullptr) {
        std::cout << "Dynamic casting successful." << std::endl;
        ad->print(); 
    }
    else {
        std::cout << "Dynamic casting failed." << std::endl;
    }*/

    //Base* ex = new Derived(); //upcast

    //Derived* d = dynamic_cast<Derived*>(ex);//downcast
    
    std::shared_ptr<Base> sb = std::make_shared<Derived>();

   /* std::shared_ptr<Derived> sd = std::dynamic_pointer_cast<Derived>(sb);

    if (sd != nullptr) {
        std::cout << "Dynamic casting successful." << std::endl;
        sd->print(); 
    }
    else {
        std::cout << "Dynamic casting failed." << std::endl;
    }*/

    return 0;
}

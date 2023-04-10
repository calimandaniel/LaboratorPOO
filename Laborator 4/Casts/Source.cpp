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
    Base* baseDerived = new Derived();

    // Regular Cast
     
   /* Derived* derived1 = (Derived*)baseDerived;
    derived1->print();*/

    //int i = 10;
    //double d = (double)i;

    // Static Cast
    //Derived* derived3 = static_cast<Derived*>(baseDerived);
    //derived3->print();
    //delete baseDerived;


    //int i = 10;
    //double d = static_cast<double>(i);



    // Dynamic Cast
    //Derived* derived2 = dynamic_cast<Derived*>(baseDerived);
    //derived2->print();

    //Base* base = new Base();
    //Derived* derived2 = dynamic_cast<Derived*>(base); // Returns nullptr
    //if (derived2 != nullptr) {
    //    derived2->print();
    //}
    //else {
    //    std::cout << "Failed to cast to Derived pointer" << std::endl;
    //}






    

    //Reinterpret cast
    // Converting a pointer to a base class to a completely unrelated type using reinterpret_cast
    //Base* b = new Base();
    //int* p = reinterpret_cast<int*>(b);
    //*p = 10;
    //std::cout << *p << std::endl;  // Output: 10
    //(LSB - Least Significant Byte) este stocat la adresa de memorie cea mai mica (primul octet), deci pentru conversie va trebui sa inversam ordinea
    //0x0000000a = 0 + 0*16 + 0*256 + 10*4096 = 10


    ////Const_cast
    // Removing constness from a pointer to a const Base object using const_cast
    /*const Base* b1 = new Base();
    Base* b2 = const_cast<Base*>(b1);
    b2->print(); */
}

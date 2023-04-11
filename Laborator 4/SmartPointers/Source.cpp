#include <iostream>
#include <string>
#include <memory>
//1
//// Example of a memory leak with classes:
//class MyClass {
//public:
//    MyClass() { std::cout << "MyClass constructed" << std::endl; }
//    ~MyClass() { std::cout << "MyClass destructed" << std::endl; }
//};
//
//int main() {
//    MyClass* ptr = new MyClass(); // dynamically allocate memory
//    // forgot to delete the allocated memory
//}





////2
//// Example of a dangling pointer with classes:
//class MyClass {
//public:
//    MyClass() { std::cout << "MyClass constructed" << std::endl; }
//    ~MyClass() { std::cout << "MyClass destructed" << std::endl; }
//};
//
//int main() {
//    MyClass* ptr = new MyClass(); // dynamically allocate memory
//    MyClass* ptr2 = ptr; // ptr2 points to the same memory location as ptr
//    delete ptr;
//}






////3
//// Example of memory corruption with classes:
//class MyClass {
//public:
//    int data;
//    MyClass() : data(0) { }
//};
//
//int main() {
//    MyClass* ptr = new MyClass(); // dynamically allocate memory
//    ptr->data = 42; // set data to a value
//    int* p = reinterpret_cast<int*>(ptr);
//    *(p + 1) = 10; // write beyond the end of the allocated memory
//}





////4
////Unique pointer
//class MyClass {
//public:
//    MyClass() {
//        std::cout << "MyClass constructor called" << std::endl;
//    }
//    ~MyClass() {
//        std::cout << "MyClass destructor called" << std::endl;
//    }
//    void sayHello() {
//        std::cout << "Hello from MyClass!" << std::endl;
//    }
//};
//
//int main() {
//    std::unique_ptr<MyClass> ptr1 = std::make_unique<MyClass>();
//    //std::unique_ptr<MyClass> ptr23(new MyClass());
//    //ptr->sayHello();
//    std::unique_ptr<MyClass> ptr2 = std::move(ptr1);
//
//    
//    //std::unique_ptr<MyClass> ptr4 = ptr2; 
//    //std::unique_ptr<MyClass> ptr5(ptr2); // Error: copy constructor is deleted
//    
//    if (ptr1 == nullptr) {
//        std::cout << "ptr1 is now a null pointer" << std::endl;
//    }
//
//    // call a method on the object using ptr2
//    ptr2->sayHello();
//
//    // reset the pointer (deletes the object)
//    ptr2.reset();
//
//    return 0;
//
//}



////Shared Pointer
//class Person {
//public:
//    Person(const std::string& n) : name(n) {
//        std::cout << "Creating person " << name << std::endl;
//    }
//    ~Person() {
//        std::cout << "Deleting person " << name << std::endl;
//    }
//    void setName(const std::string& n) {
//        name = n;
//    }
//    std::string getName() const {
//        return name;
//    }
//private:
//    std::string name;
//};
//
//int main() {
//    //std::shared_ptr<Person> person1(new Person("Alice"));
//    std::shared_ptr<Person> person1 = std::make_shared<Person>("Alice");
//    std::shared_ptr<Person> person2(person1);
//    std::shared_ptr<Person> person3 = person2;
//
//    std::cout << "Name of person1: " << person1->getName() << std::endl;
//    std::cout << "Name of person2: " << person2->getName() << std::endl;
//    std::cout << "Name of person3: " << person3->getName() << std::endl;
//
//    person2->setName("Bob");
//
//    std::cout << "Name of person1: " << person1->getName() << std::endl;
//    std::cout << "Name of person2: " << person2->getName() << std::endl;
//    std::cout << "Name of person3: " << person3->getName() << std::endl;
//
//    return 0;
//}



////Weak pointer
class Person {
public:
    std::string name;
    std::weak_ptr<Person> partner;

    Person(const std::string& n) : name(n) {}

    void setPartner(std::shared_ptr<Person> p) {
        partner = p;
    }

    void greet() {
        if (auto p = partner.lock()) {
            std::cout << "Hello, " << p->name << ", my partner!\n";
        }
        else {
            std::cout << "Sorry, you don't have a partner.\n";
        }
    }
};

int main() {
    std::shared_ptr<Person> p1 = std::make_shared<Person>("John");
    std::shared_ptr<Person> p2 = std::make_shared<Person>("Jane");

    p1->setPartner(p2);
    p2->setPartner(p1);

    p1->greet(); // Output: Hello, Jane, my partner!
    p2->greet(); // Output: Hello, John, my partner!

    p1.reset();
    
    p2->greet();

    p2.reset();

    return 0;
}
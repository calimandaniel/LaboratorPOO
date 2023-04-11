#include <iostream>
#include <string>

//SOLID


//S Single Responsibility Principle

//class Logger {
//public:
//    void log(const std::string& message) {
//        std::cout << message << std::endl;
//    }
//};
//
//class Calculator {
//public:
//    int add(int x, int y) {
//        logger.log("Addition performed");
//        return x + y;
//    }
//
//private:
//    Logger logger;
//};
//
//int main() {
//    Calculator calculator;
//    std::cout << calculator.add(2, 3) << std::endl;
//    return 0;
//}


//O Open-Closed

//#include <iostream>
//#include <vector>
//
//class Shape {
//public:
//    virtual double area() const = 0;
//};
//
//class Circle : public Shape {
//public:
//    Circle(double radius) : m_radius(radius) {}
//    double area() const override { return 3.14 * m_radius * m_radius; }
//
//private:
//    double m_radius;
//};
//
//class Square : public Shape {
//public:
//    Square(double side) : m_side(side) {}
//    double area() const override { return m_side * m_side; }
//
//private:
//    double m_side;
//};
//
//double calculateTotalArea(const std::vector<Shape*>& shapes) {
//    double totalArea = 0;
//    for (const auto& shape : shapes) {
//        totalArea += shape->area();
//    }
//    return totalArea;
//}
//
//int main() {
//    Circle circle(5);
//    Square square(4);
//    std::vector<Shape*> shapes{ &circle, &square };
//    std::cout << "Total area: " << calculateTotalArea(shapes) << std::endl;
//    return 0;
//}



//L Liskov Substitution

//class Bird {
//public:
//    virtual void fly() = 0;
//};
//
//class Penguin : public Bird {
//public:
//    void fly() override {
//        // Penguins cannot fly, so do nothing
//    }
//};
//
//class Pigeon : public Bird {
//public:
//    void fly() override {
//        std::cout << "Flying like a pigeon." << std::endl;
//    }
//};
//
//void makeBirdFly(Bird& bird) {
//    bird.fly();
//}
//
//int main() {
//    Penguin penguin;
//    makeBirdFly(penguin); // The penguin does not fly, so it should do nothing.
//
//    Pigeon pigeon;
//    makeBirdFly(pigeon); // The pigeon flies as expected.
//
//    return 0;
//}




// I Interface Segregation

// Bad design
//class Worker {
//public:
//    virtual void doWork() = 0;
//    virtual void eat() = 0;
//    virtual void sleep() = 0;
//};
//
//// Good design
//class IWorker {
//public:
//    virtual void doWork() = 0;
//};
//
//class IEater {
//public:
//    virtual void eat() = 0;
//};
//
//class ISleeper {
//public:
//    virtual void sleep() = 0;
//};
//
//class Worker : public IWorker, public IEater, public ISleeper {
//public:
//    void doWork() override {
//        // ...
//    }
//
//    void eat() override {
//        // ...
//    }
//
//    void sleep() override {
//        // ...
//    }
//};



//D Dependency Inversion
// 
// 
// Bad design
//class DBConnection {
//public:
//    void connect() {
//        // ...
//    }
//};
//
//class UserService {
//public:
//    UserService(DBConnection* dbConnection) {
//        this->dbConnection = dbConnection;
//    }
//
//    void createUser(const std::string& username, const std::string& password) {
//        dbConnection->connect();
//        // ...
//    }
//
//private:
//    DBConnection* dbConnection;
//};
//
//// Good design
//class IDBConnection {
//public:
//    virtual void connect() = 0;
//};
//
//class DBConnection : public IDBConnection {
//public:
//    void connect() override {
//        // ...
//    }
//};
//
//class UserService {
//public:
//    UserService(IDBConnection* dbConnection) {
//        this->dbConnection = dbConnection;
//    }
//
//    void createUser(const std::string& username, const std::string& password) {
//        dbConnection->connect();
//        // ...
//    }
//
//private:
//    IDBConnection* dbConnection;
//};

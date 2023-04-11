#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
    Person(string n, int a) : name(n), age(a) {}
    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee {
public:
    int emp_id;
    float salary;
    Employee(int id, float sal) : emp_id(id), salary(sal) {}
    void displayEmployee() {
        cout << "Employee ID: " << emp_id << ", Salary: $" << salary << endl;
    }
};

class Manager : public Person, public Employee {
public:
    string department;
    Manager(string n, int a, int id, float sal, string dept)
        : Person(n, a), Employee(id, sal), department(dept) {}
    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Employee ID: " << emp_id << ", Salary: $" << salary << ", Department: " << department << endl;
    }
};

int main() {
    Manager m("John Doe", 35, 1234, 75000, "Sales");
    m.displayPerson();
    m.displayEmployee();
    m.display();
    return 0;
}

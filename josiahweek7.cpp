#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int age;
    int serviceYear;
    double salary;

public:
    // Parameterized constructor
    Employee(string n, int a, int sY, double sal) {
        name = n;
        age = a;
        serviceYear = sY;
        salary = sal;
    }

    // Destructor
    ~Employee() {
        cout << "Employee object destroyed" << endl;
    }

    // Accessor (getter) functions
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    int getServiceYear() {
        return serviceYear;
    }

    double getSalary() {
        return salary;
    }
};

int main() {
    // Create an Employee object
    Employee emp("John Doe", 35, 10, 75000.50);

    // Access data using accessor functions
    cout << "Name: " << emp.getName() << endl;
    cout << "Age: " << emp.getAge() << endl;
    cout << "Service Years: " << emp.getServiceYear() << endl;
    cout << "Salary: " << emp.getSalary() << endl;

    return 0;
}

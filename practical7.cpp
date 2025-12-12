//ENC222-0137/2024
#include <iostream>
#include <string>
class Employee {
private:
    std::string name;
    int age;
    int serviceYear;
    double salary;

public:
    Employee(std::string empName, int empAge, int empServiceYear, double empSalary)
        : name(empName), age(empAge), serviceYear(empServiceYear), salary(empSalary) {
        std::cout << "Constructor called for " << name << std::endl;
    }

    ~Employee() {
        std::cout << "Destructor called for " << name << std::endl;
    }

    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    int getServiceYear() const {
        return serviceYear;
    }

    double getSalary() const {
        return salary;
    }

    void displayDetails() const {
        std::cout << "\n--- Employee Details ---\n";
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Service Years: " << serviceYear << std::endl;
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int main() {
    std::cout << "Creating an employee object..." << std::endl;
    Employee emp1("Alice Johnson", 45, 20, 95000.00);

    std::cout << "\nAccessing data via getters:\n";
    std::cout << "Employee Name: " << emp1.getName() << std::endl;
    std::cout << "Employee Age: " << emp1.getAge() << std::endl;
    std::cout << "Employee Salary: $" << emp1.getSalary() << std::endl;
    
    emp1.displayDetails();

    std::cout << "\nProgram finished. emp1 is about to go out of scope." << std::endl;
    return 0;
}


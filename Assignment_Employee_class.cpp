#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int idNumber;
    std::string department;
    std::string position;

public:
    // Default constructor
    Employee() : name(""), idNumber(0), department(""), position("") {}

    // Constructor that takes name and idNumber, sets department and position to empty string
    Employee(std::string empName, int empID) : name(empName), idNumber(empID), department(""), position("") {}

    // Constructor that takes all parameters
    Employee(std::string empName, int empID, std::string empDept, std::string empPos)
        : name(empName), idNumber(empID), department(empDept), position(empPos) {}

    // Mutator (setter) methods
    void setName(const std::string& empName) {
        name = empName;
    }

    void setIdNumber(int empID) {
        idNumber = empID;
    }

    void setDepartment(const std::string& empDept) {
        department = empDept;
    }

    void setPosition(const std::string& empPos) {
        position = empPos;
    }

    // Accessor (getter) methods
    std::string getName() const {
        return name;
    }

    int getIdNumber() const {
        return idNumber;
    }

    std::string getDepartment() const {
        return department;
    }

    std::string getPosition() const {
        return position;
    }

    // Function to display employee details
    void displayEmployee() const {
        std::cout << "Employee Name: " << name << std::endl;
        std::cout << "ID Number: " << idNumber << std::endl;
        std::cout << "Department: " << department << std::endl;
        std::cout << "Position: " << position << std::endl;
    }
};

int main() {
    // Creating Employee objects using different constructors

    // Employee 1: Using constructor with all details
    Employee emp1("John Doe", 1234, "Sales", "Manager");
    emp1.displayEmployee();

    std::cout << std::endl;

    // Employee 2: Using constructor with only name and ID, department and position are empty
    Employee emp2("Jane Smith", 5678);
    emp2.displayEmployee();

    std::cout << std::endl;

    // Employee 3: Using default constructor
    Employee emp3;
    emp3.displayEmployee();

    // Setting values for Employee 3 using mutators
    emp3.setName("Michael Brown");
    emp3.setIdNumber(9876);
    emp3.setDepartment("HR");
    emp3.setPosition("Recruiter");

    std::cout << "\nUpdated Employee 3 details:\n";
    emp3.displayEmployee();

    return 0;
}

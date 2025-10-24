#include <iostream>
#include <string>

class employees;
class students;

// Friend function declaration
void account(employees &emp, students &stu);

class employees {
private:
    std::string empName;
    double empSalary;

public:
    // Constructor
    employees(const std::string &name, double salary) 
        : empName(name), empSalary(salary) {}

    // Friend function declaration
    friend void account(employees &emp, students &stu);
};

class students {
private:
    std::string stuName;
    double stuFees;

public:
    // Constructor
    students(const std::string &name, double fees) 
        : stuName(name), stuFees(fees) {}

    // Friend function declaration
    friend void account(employees &emp, students &stu);
};

// Friend function definition
void account(employees &emp, students &stu) {
    std::cout << "Employee Name: " << emp.empName << ", Salary: $" << emp.empSalary << std::endl;
    std::cout << "Student Name: " << stu.stuName << ", Fees: $" << stu.stuFees << std::endl;
}

int main() {
    // Create objects
    employees emp("Alice", 5000.0);
    students stu("Bob", 2000.0);

    // Call the friend function
    account(emp, stu);

    return 0;
}

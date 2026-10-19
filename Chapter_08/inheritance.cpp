#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Intermediate derived class
class Student : public Person {
public:
    string regNumber;
    string university;

    void displayStudent() {
        cout << "Registration Number: " << regNumber << endl;
        cout << "University: " << university << endl;
    }
};

// Final derived class
class EngineeringStudent : public Student {
public:
    string course;
    int yearOfStudy;

    void displayEngineering() {
        cout << "Course: " << course << endl;
        cout << "Year of Study: " << yearOfStudy << endl;
    }
};

int main() {
    EngineeringStudent student1;

    // Inherited from Person
    student1.name = "Ivan";
    student1.age = 23;

    // Inherited from Student
    student1.regNumber = "25/U/0819";
    student1.university = "Makerere University";

    // Defined in EngineeringStudent
    student1.course = "Electrical Engineering";
    student1.yearOfStudy = 2;

    cout << "=== STUDENT INFORMATION ===" << endl;
    student1.displayPerson();
    student1.displayStudent();
    student1.displayEngineering();

    return 0;
}
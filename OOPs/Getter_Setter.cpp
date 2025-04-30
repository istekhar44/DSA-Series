#include <iostream>
using namespace std;

class Ramesh {
private:
    string Name;
    int age;
    float Marks;

public:
    string fatherName;
    int fatherAge;

    // Default constructor   they are already made 
    Ramesh() {
        Name = "Unknown";
        age = 0;
        Marks = 0.0;
        fatherName = "Unknown";
        fatherAge = 0;
    }

    // Parameterized constructor
    Ramesh(string name, int a, float m, string fName, int fAge) {
        this->Name = name;
        this->age = a;
        this->Marks = m;
        this->fatherName = fName;
        this->fatherAge = fAge;
    }

    // Setter for Name
    void setName(string name) {
        this->Name = name;
    }

    // Getter for Name
    string getName() {
        return Name;
    }

    // Getter for Age
    int getAge() {
        return age;
    }

    // Getter for Marks
    float getMarks() {
        return Marks;
    }
};

int main() {
    // Create object using default constructor
    Ramesh s1;

    // Set name using setter
    s1.setName("Mohit");

    // Access and print values using getters and public members
    cout << "Student Name: " << s1.getName() << endl;

    // Set public variables directly
    s1.fatherName = "Rohit Mehra";
    s1.fatherAge = 45;

    cout << "Father Name: " << s1.fatherName << endl;
    cout << "Father Age: " << s1.fatherAge << endl;

    // Create object using parameterized constructor
    Ramesh s2("Aman", 20, 89.5, "Rajesh Kumar", 48);
    cout << "\nSecond Student Info:\n";
    cout << "Name: " << s2.getName() << endl;
    cout << "Age: " << s2.getAge() << endl;
    cout << "Marks: " << s2.getMarks() << endl;
    cout << "Father Name: " << s2.fatherName << endl;
    cout << "Father Age: " << s2.fatherAge << endl;

    return 0;
}

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

    // Setter for Name
    void setName(string n) {
        Name = n;  // Corrected: Assign to class member, not local variable
    }

    // Getter for Name
    string getName() {
        return Name;
    }
};

int main() {
    Ramesh s1;

    // Call the setter to assign value
    s1.setName("Mohit");

    // Call the getter to retrieve value
    cout << "Student Name: " << s1.getName() << endl;

    return 0;
}

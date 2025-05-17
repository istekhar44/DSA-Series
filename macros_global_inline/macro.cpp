//what is the macros in the cpp ?

// In programming, macros are used primarily in C/C++, 
// where they allow you to define reusable code snippets, 
// constants, or expressions that are expanded by the preprocessor before compilation. 
// JavaScript doesn't have macros natively, but in C/C++, there are several types of macros, each with specific use cases.



/*#include<iostream>
using namespace std;
#define PI 3.14     //create the mecro 
int main(){
    int r = 5;
    //double pi = 3.14
    double area= PI *r *r;
    cout<<"area of the circle "<<area <<endl;
return 0;
}*/


//Calcululate the volume of the circle 
/*#include <iostream>
using namespace std ;
#define Pi 3.14            //Define the macros in the cpp
int main(){
    int r ;
    cout<<"Enter the radius :"<<endl;
    cin>>r;

    cout<<"Enter the height"<<endl;
    int h ;
    cin>>h;
    
    

    double area = Pi*r*r*h;
    cout<<"print the area:"<<area<<endl;
    return 0;
}*/


//Object like macros in the cpp
#define PI 3.14
#define MAX 100

#include <iostream>
#include <string>

using namespace std;

// 1. Object-like Macros
#define PI 3.14159
#define MAX_VALUE 100

// 2. Function-like Macros
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// 3. Multiline Macro
#define PRINT_SUM(a, b)             \
    cout << "Sum of " << a << " and " << b << " is " << (a + b) << endl

// 4. Conditional Macro
#define DEBUG

#ifdef DEBUG
#define LOG(x) cout << "DEBUG: " << x << endl
#else
#define LOG(x)
#endif

// 5. Undefining and Redefining Macro
#define TEMP 25
#undef TEMP
#define TEMP 30

// 6. Stringizing Macro (#)
#define TO_STRING(x) #x

// 7. Token Pasting Macro (##)
#define MAKE_VAR(name) int var_##name = 10

// 8. Include Guard (Simulated here)
// Typically used in headers, e.g.:
// #ifndef HEADER_FILE
// #define HEADER_FILE
// // content
// #endif

// 9. Predefined Macros
void showBuildInfo() {
    cout << "Compiled at: " << __DATE__ << " " << __TIME__ << endl;
    cout << "File: " << __FILE__ << ", Line: " << __LINE__ << endl;
    cout << "Inside function: " << __func__ << endl;
}

int main() {
    // Object-like Macro Usage
    cout << "Value of PI: " << PI << endl;
    cout << "Max Value: " << MAX_VALUE << endl;

    // Function-like Macro Usage
    cout << "Square of 5: " << SQUARE(5) << endl;
    cout << "Max of 10 and 20: " << MAX(10, 20) << endl;

    // Multiline Macro Usage
    PRINT_SUM(10, 20);

    // Conditional Macro Usage
    LOG("This is a debug message");

    // Undefining and Redefining
    cout << "Temperature: " << TEMP << endl;

    // Stringizing Macro Usage
    cout << TO_STRING(This is turned into a string) << endl;

    // Token Pasting Macro Usage
    MAKE_VAR(x);
    cout << "Value of var_x: " << var_x << endl;

    // Predefined Macros
    showBuildInfo();

    return 0;
}

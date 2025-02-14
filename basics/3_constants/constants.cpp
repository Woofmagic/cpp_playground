#include <iostream>
#include <string>

using namespace std;

const double pi_to_seventh = 3.1415926;

// this is a preprocessor directive:
// :: all it does is assigns `RANDOM_NUMBER` to its replacement value
// :: since it is a *preprocessor* directive, it only plays a role during compiling.
// :: that is, there is no opportunity to type-check or scrub syntax beforehand:
#define RANDOM_NUMBER 1.459

int compute_area() {

    double radius = 5.0;
    double circle_area = pi_to_seventh * radius * radius;
    double fake_area = 2 * RANDOM_NUMBER * circle_area;

    cout << "Here is a test: which is the real area of a circle of radius 5.0?" << endl;

    cout << fake_area << endl;
    cout << "...or..." << endl;
    cout << circle_area << endl;
}

int main()
{
    int a = 5;
    int octalnumber = 0133;
    int hexadecimalnumber = 0x4b;

    cout << "We will try to add the three numbers just defined:" << endl;

    int result;
    result = a + octalnumber + hexadecimalnumber;
    
    cout << result << endl;

    double pi_to_fifth = 3.14159;
    double avogadros_number = 6.02e23;
    double charge_of_electron_in_C = 1.6e-19;
    double three = 3.0;

    cout << "What will happen if we add those numbers together?" << endl;

    double fancy_result = pi_to_fifth + avogadros_number + three + charge_of_electron_in_C;
    
    cout << fancy_result << endl;

    // single-character literals are different...
    string zz = "z";
    string pp = {'p'};

    // ... than string literals of several characters:
    string hello = ("hello");
    string boring = "boring";

    string two_lined_string = "two-lined \ string";

    compute_area();

}
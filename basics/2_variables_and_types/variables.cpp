// a "variable" is a portion of memory to store a value

// declare an int variable `a`:
int a;

// delcare a float variable `myfloat`;
float myfloat;

#include <iostream>

using namespace std;

int string_program() 
{
    cout << "Now running string_program()";

    #include <string>
    cout << "Now using the string library; This enables interface with the famous compound type called 'strings'";

    string c_like_initialized_string = "C-like";
    string construtor_initializeed_string ("Constructor");
    string uniform_initialized_string {"Uniform"};

    // notice I used \n instead of endl below... will that work? We'll find out:
    cout << "Let's look at the strings we declared:\n";
    cout << c_like_initialized_string;
    cout << construtor_initializeed_string;
    cout << uniform_initialized_string << endl;

    cout << "That was messy, because we didn't know about endl! Let's separate them now:" << endl;

    cout << c_like_initialized_string << endl;
    cout << construtor_initializeed_string << endl;
    cout << uniform_initialized_string << endl;

    // it seems that \n and endl have the same effect, but that is because:
    // :: "...inserting the endl manipulator ends the line (printing a newline character and flushing the stream)."

    return 0;
}

int main ()
{

    // declare two ints --- value is undetermined:
    int b, c;

    // declare a result --- value is undetermined:
    int result;

    // once declared, we can assign and manipulate variables:
    b = 5;
    c = 3;
    b = b + 1;

    // notice the result is positive still:
    result = b - c;

    // cout is used without qualification to std namespace:
    cout << result;

    // using the three types of initialization of variables:

    // c-like:
    int A = 7;

    // constructor:
    int B (5);

    // uniform:
    int C {1};

    // initialize `newresult` with no value yet:
    int newresult;

    newresult = A + B - C;
    
    cout << newresult;

    // using "auto" tells compiler to figure out what the type is:
    int random1 = 0;
    auto random2 = random1;

    // decltype() will perform "type deduction"
    int random3 = 5;
    decltype(random3) random4; // strange syntax...

    string_program();

    return 0;
}
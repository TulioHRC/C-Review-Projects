// Simple one line Comment
/*
More than one line Comment
*/

#include <iostream> // Importing iostream lib, "advanced" version of stdio.h lib
#include <cmath> // Math lib to pow and sqrt functions

using namespace std; // This means that we are using functions of the std lib, so "cout" is "std::cout"

int year = 2021; // int is the type of variable, and always remember to use ";" in the end of a coding line

int main(){ // the main function always will be the first loaded, and it needs to be an int variable
    cout << "Hello World!" << endl;
/*
    cout it's like print on Python. << it's just a separation to show information in the console
    endl it's like "\n" on Python, a new line command.
*/
    string name; // Declaration of a string (text) variable

    cout << "What's your name? ";
    cin >> name; // Input information in the console

    float number;

    cout << "Nice to meet you " << name << "! Can you type a number for me? ";
    cin >> number;

    cout << endl << "Oh thanks! You typed " << number << " and its square root is " << sqrt(number) << endl;
    // sqrt it's a cmath function

    return 0; // Int variables need a return
}

#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "Type an intenger number between 1 and 5: ";
    cin >> num;

    if(num > 5 || num < 1) {
        cout << "You typed a number bigger than 5 or smaller than 1, please read the instructions!" << endl;
    } else {
        switch(num){ // Case val of num
        case 1:
            num = 2;
            break;
        case 2:
            num = 1;
            break;
        case 3:
            num = 4;
            break;
        case 4:
            num = 5;
            break;
        case 5:
            num = 3;
            break;
        }
        cout << endl << num << endl;
        string response = (num>2) ? "True" : "False"; // (condition) ? valTrue : valFalse;
        cout << "The number is bigger than 2? " << response << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

void hello(){
    cout << "Hello World" << endl;
}

int findPrime(int position){
    int primes[position] = {}; // Prime numbers array
    primes[0] = 2;
    int primeQuant = 1;
    int num = 3;

    while(primeQuant < position) {
        for(int i = primeQuant-1; i != -1; i--){
            if((num%primes[i]) == 0){
                break;
            }
            if(i == 0 && (num%primes[i]) != 0){
                primes[primeQuant] = num;
                primeQuant++;
            }
        }
        num++;
    }
    return primes[position-1];
}

int main(){
    hello();

    int posPrime;

    cout << "Which prime number do you want: ";
    cin >> posPrime;

    int prime = findPrime(posPrime);

    cout << endl << "Prime number you want is " << prime << endl;

    return 0;
}

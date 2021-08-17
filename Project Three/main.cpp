#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "Number of prime numbers: ";
    cin >> num;

    int lastNum = 3; // Analisation number

    int primes[num] = {};
    primes[0] = 1;
    primes[1] = 2;

    int primesQuant = 2;
    while(primesQuant < num){
        for(int i = 2; (lastNum%i) != 0; i++){
            if((i+1) == lastNum){
                primes[primesQuant] = lastNum;
                primesQuant++;
            }
        }
        lastNum++;
    }

    for(int i = 0; (i<num); i++){
        cout << primes[i] << endl;
    }

    return 0;
}

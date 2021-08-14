#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "Number of numeros primos: ";
    cin >> num;

    int lastNum = 3; // Analisation number

    int primos[num] = {};
    primos[0] = 1;
    primos[1] = 2;

    int primosQuant = 2;
    while(primosQuant < num){
        for(int i = 2; (lastNum%i) != 0; i++){
            if((i+1) == lastNum){
                primos[primosQuant] = lastNum;
                primosQuant++;
            }
        }
        lastNum++;
    }

    for(int i = 0; (i<num); i++){
        cout << primos[i] << endl;
    }

    return 0;
}

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int sides[3];

    cin >> sides[0] >> sides[1] >> sides[2];

    sort(sides, sides + 3);

    if(sides[0] + sides[1] <= sides[2]){
        cout << "Invalido" << endl;
    }
    else{
        if(sides[0] == sides[1] || sides[0] == sides[2] || sides[1] == sides[2]){
            if(sides[0] == sides[1] && sides[1] == sides[2]){
                cout << "Valido-Equilatero" << endl;
            }
            else{
                cout << "Valido-Isoceles" << endl;
            }
        }
        else{
            cout << "Valido-Escaleno" << endl;
        }
        if(pow(sides[2], 2) == pow(sides[0],2) + pow(sides[1],2)){
            cout << "Retangulo: S" << endl;
        }
        else{
            cout << "Retangulo: N" << endl;
        }
    }

    return 0;
}

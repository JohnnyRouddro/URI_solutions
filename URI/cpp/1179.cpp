#include <iostream>

using namespace std;

int main(){

    int input[15], par[5], impar[5];
    int par_pos = 0, impar_pos = 0;

    for(int i=0; i<15; i++){
        cin >> input[i];
    }

    for(int i=0; i<15; i++){

        if(input[i]%2 == 0){par[par_pos] = input[i]; par_pos++;}
        else{impar[impar_pos] = input[i]; impar_pos++;}

        if(par_pos > 4) {
            par_pos = 0;
            for(int i=0; i<5; i++){
                cout << "par[" << i << "] = " << par[i] << endl;
            }
        }
        if(impar_pos > 4) {
            impar_pos = 0;
            for(int i=0; i<5; i++){
                cout << "impar[" << i << "] = " << impar[i] << endl;
            }
        }
    }
    for(int i=0; i<impar_pos; i++){
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }
    for(int i=0; i<par_pos; i++){
        cout << "par[" << i << "] = " << par[i] << endl;
    }

    return 0;
}

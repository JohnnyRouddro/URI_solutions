#include <iostream>

using namespace std;

int main(){

    float a[100];

    for(int i=0; i<100; i++){
        cin >> a[i];
    }

    for(int i=0; i<100; i++){
        if(a[i] <= 10){
            cout.precision(1);
            cout << "A[" << i << "] = " << fixed << a[i] << endl;
        }
    }

    return 0;
}

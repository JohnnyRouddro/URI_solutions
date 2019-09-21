#include <iostream>

using namespace std;

int main(){

    double x, n[100];

    cin >> x;

    cout.precision(4);
    for(int i=0; i<100; i++){
        cout << "N[" << i << "] = " << fixed << x << endl;
        x /= 2.0;
    }

    return 0;
}

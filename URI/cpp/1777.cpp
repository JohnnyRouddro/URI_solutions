#include <iostream>

using namespace std;

int main(){

    int t, n[1000];

    cin >> t;

    for(int i=0; i<1000; i++){
        cout << "N[" << i << "] = " << i%t << endl;
    }

    return 0;
}

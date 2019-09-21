#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    int n, x = 1;

    while(1){

        cin >> n;
        if(n == 0) break;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cout << setw(3) << abs(i-j) + 1;
                if(j<n) cout << " ";
            }
            cout << endl;
        }
        cout << endl;

    }

    return 0;
}

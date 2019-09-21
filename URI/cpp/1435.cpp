#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n, x = 1;

    while(1){

        cin >> n;
        if(n == 0) break;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){

            if(i <=n/2 && j <=n/2)
                cout << setw(3) << min(i, j);
            else
                cout << setw(3) << min(min(n-i+1, n-j+1), min(i, j));
            if(j<n) cout << " ";
            }
            cout << endl;
        }
        cout << endl;

    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    while(cin >> n){

        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cout << ((i+j)==n+1 ? 2 : ((i==j) ? 1 : 3));
            }
            cout << "\n";
        }
    }

    return 0;
}

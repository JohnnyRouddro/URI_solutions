#include <iostream>

using namespace std;

unsigned long long int fib(int n){

    unsigned long long int fib1 = 0;
    unsigned long long int fib2 = 1;

    if(n == 0) return fib1;
    else if(n == 1) return fib2;
    else{
        for(int i=2; i<=n; i++){
            fib2 = fib1 + fib2;
            fib1 = fib2 - fib1;
        }
        return fib2;
    }
}

int main(){

    int t, n;

    cin >> t;

    while(t--){

        cin >> n;

        cout << "Fib(" << n << ") = " << fib(n) << endl;

    }

    return 0;
}

#include <iostream>

using namespace std;

long long int factorial(long long int num){

    if (num > 1)
        return num * factorial(num -1);
    else
        return 1;
}

int main(){

    long long int m, n;

    while(cin >> m >> n) {

        cout << factorial(m) + factorial(n) << endl;

    }

    return 0;
}

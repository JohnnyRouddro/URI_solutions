#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n, x;
    unsigned long long int weight;

    cin >> n;

    for (int i=0; i<n; i++){
        cin >> x;

        weight = (pow(2, x) - 1) / 12000;

        cout << weight << " kg" << endl;
    }

    return 0;
}

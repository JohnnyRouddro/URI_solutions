#include <iostream>

using namespace std;

int main(){

    int n, smallest = 1000, smallest_pos;

    cin >> n;

    int x[n];

    for(int i=0; i<n; i++){
        cin >> x[i];
        if(x[i] < smallest){
            smallest = x[i];
            smallest_pos = i;
        }
    }

    cout << "Menor valor: " << smallest << endl;
    cout << "Posicao: " << smallest_pos << endl;

    return 0;
}

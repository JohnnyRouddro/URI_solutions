#include <iostream>

using namespace std;

int main(){
    float m[12][12], sum = 0;
    int column;
    char operation;

    cin >> column;
    cin >> operation;

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> m[i][j];
        }
    }

    for(int i=0; i<12; i++){
        sum += m[i][column];
    }

    cout.precision(1);
    if(operation == 'S') cout << fixed << sum << endl;
    else if(operation == 'M') cout << fixed << sum/12.0 << endl;

    return 0;
}

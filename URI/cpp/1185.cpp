#include <iostream>

using namespace std;

int main(){

    float m[12][12];
    float sum = 0.0;
    char o;

    cin >> o;

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> m[i][j];
            if(i + j < 11){
                sum += m[i][j];
            }
        }
    }

    cout.precision(1);

    if(o == 'S'){
        cout << fixed << sum << endl;
    }
    else{
        cout << fixed << sum/66.0 << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int eat(float supply, int day){

    if (supply <= 1) return day;

    return eat(supply/2, ++day);
}

int main(){

    int n;
    float x;

    cin >> n;

    for (int i=0; i<n; i++){
        cin >> x;

        cout << eat(x, 0) << " dias" << endl;
    }

    return 0;
}

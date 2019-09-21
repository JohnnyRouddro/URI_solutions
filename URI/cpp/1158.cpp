#include <iostream>

using namespace std;

int main(){

    int n, x, y;

    cin >> n;

    while(n--){
        cin >> x >> y;

        if(x%2 == 0){
            ++x;
        }

        cout << y*((2*x+(y-1)*2)/2) << endl;
    }

    return 0;
}

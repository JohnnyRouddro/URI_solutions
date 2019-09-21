#include <iostream>

using namespace std;

int main(){

    int x;

    while(1){
        cin >> x;

        if(x == 0){
            break;
        }
        else if(x%2 !=0){
            x++;
        }

        cout << 5*((2*x+(5-1)*2)/2) << endl;

    }

    return 0;
}

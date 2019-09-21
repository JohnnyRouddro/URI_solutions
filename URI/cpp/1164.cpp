#include <iostream>

using namespace std;

int main(){

    int temp, n, x, sum;

    cin >> n;

    while(n--){
        sum = 0;
        temp = 1;
        cin >> x;
        while(temp < x){
            if(x%temp == 0) sum += temp;
            temp++;
        }
        if(sum == x){
            cout << x << " eh perfeito" << endl;
        }
        else{
            cout << x << " nao eh perfeito" << endl;
        }
    }

    return 0;
}

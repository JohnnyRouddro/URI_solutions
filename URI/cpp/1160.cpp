#include <iostream>

using namespace std;

int main(){

    int t, a, b, years = 0;
    double g1, g2;

    cin >> t;

    while(t--){
        years = 0;

        cin >> a >> b >> g1 >> g2;

        while(a <= b){
            a += g1 * a / 100;
            b += g2 * b / 100;
            years++;

            if(years > 100){
                cout << "Mais de 1 seculo." << endl;
                break;
            }
        }
        if(years <= 100) cout << years << " anos." << endl;

    }

    return 0;
}

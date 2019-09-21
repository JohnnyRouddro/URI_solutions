#include <iostream>

using namespace std;

int main() {

    int n, f1, f2;

    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> f1 >> f2;

        while(f1 != f2) {
            if (f1 > f2) {
                f1 -= f2;
            }else{
                f2 -= f1;
            }
        }

        cout << f1 << endl;

    }

    return 0;
}

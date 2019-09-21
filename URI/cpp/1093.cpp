#include <iostream>

using namespace std;

int main(){

    int EV1, EV2, AT, D;

    while (1) {
        cin >> EV1 >> EV2 >> AT >> D;
        if (!EV1 && !EV2 && !AT && !D) break;

        cout << "ok" << endl;

    }

    return 0;
}

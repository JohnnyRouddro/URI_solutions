#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    string ho = "";

    cin >> n;

    while(n--){
        ho += "Ho ";
    }

    ho[ho.length() - 1] = '!';
    cout << ho << endl;

    return 0;
}

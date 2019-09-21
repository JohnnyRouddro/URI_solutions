#include <iostream>
#include <string>

using namespace std;

int main(){

    int n, shift;
    string message;

    cin >> n;

    while(n--){

        cin >> message >> shift;

        for(int i=0; i<message.length(); i++){
            message[i] = (char)((message[i] - shift) + ((message[i]-shift < 65) ? 26 : 0 ));
        }
        cout << message << endl;
    }

    return 0;
}

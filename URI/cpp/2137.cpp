#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main(){

    int n;
    string input;

    while(cin >> n){

        string outputs[n];

        for(int i=0; i<n; i++){
            cin >> input;

            for(int j=0; j<=i; j++){
                if(outputs[j] == "") outputs[j] = input;
                else if(stoi(input) < stoi(outputs[j])){
                    swap(input, outputs[j]);
                }
            }
        }

        for(string output : outputs){
            cout << output << endl;
        }
    }

    return 0;
}

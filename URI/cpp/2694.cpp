#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(){

    int n;
    unsigned long long int number = 0;

    cin >> n;

    for(int i=0; i<n; i++){
        string input;
        string buffer;
        number = 0;

        cin >> input;

        for(int j=0; j<input.length(); j++){
            if(isdigit(input[j])){
                buffer += input[j];
            }
            else{
                if(buffer.size()>0){
                    number += stoll(buffer);
                    buffer = "";
                }
            }
        }
        if(buffer.size()>0){
            number += stoll(buffer);
            buffer = "";
        }

        cout << number << endl;
    }


    return 0;
}

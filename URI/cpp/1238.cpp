#include <iostream>
#include <string>

using namespace std;

int main(){

    int n, length;
    string s1, s2, final_string = "";

    cin >> n;

    while(n--){
        final_string = "";

        cin >> s1 >> s2;

        length = (s1.length() > s2.length()) ? s1.length() : s2.length();

        for(int i=0; i<length; i++){
            if(i < s1.length()) final_string += s1[i];
            if(i < s2.length()) final_string += s2[i];
        }

        cout << final_string << endl;
    }

    return 0;
}

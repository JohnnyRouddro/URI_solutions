#include <iostream>
#include <string>

using namespace std;

int main(){

    string input[7];

    for(int i=0; i<7; i++){
        cin >> input[i];
    }

    int letters_num = (input[0].length()+1)/6;

    string output[7][letters_num];

    for(int i=0; i<7; i++){
        for(int j=0; j<letters_num; j++){
            for(int l=0; l<5; l++){
                output[i][j].push_back(input[i][0]);
                input[i].erase(input[i].begin());
            }
            if(*input[i].begin() != '\0')
                input[i].erase(input[i].begin());
        }
    }

    for(int i=0; i<letters_num; i++){
        if(output[0][i][0]=='.' && output[0][i][1]=='*' && output[0][i][2]=='*' && output[0][i][3]=='*' && output[0][i][4]=='.'){ //ACGIOQ
            if(output[3][i][1] == '*') cout << 'A';
            if(output[4][i][0] == '*' && output[4][i][4] == '.') cout << 'C';
            if(output[4][i][3] == '*') cout << 'G';
            if(output[1][i][2] == '*') cout << 'I';
            if(output[2][i][4] == '*' && output[6][i][4] == '.') cout << 'O';
            if(output[4][i][2] == '*' && output[6][i][4] == '*') cout << 'Q';
        }
        else if(output[0][i][0]=='*' && output[0][i][1]=='*' && output[0][i][2]=='*' && output[0][i][3]=='*' && output[0][i][4]=='.'){ //BDPR
            if(output[3][i][1] == '*' && output[4][i][4] == '*') cout << 'B';
            if(output[1][i][4] == '*' && output[3][i][1] == '.') cout << 'D';
            if(output[4][i][2] == '*') cout << 'R';
            else if(output[1][i][4] == '*' && output[4][i][4] == '.') cout << 'P';
        }
        else if(output[0][i][0]=='*' && output[0][i][1]=='*' && output[0][i][2]=='*' && output[0][i][3]=='*' && output[0][i][4]=='*'){ //EFTZ
            if(output[2][i][3] == '*') cout << 'Z';
            else{
                if(output[5][i][2] == '*') cout << 'T';
                else{
                    if(output[3][i][4] == '.' && output[6][i][4] == '*') cout << 'E';
                    if(output[3][i][4] == '.' && output[6][i][4] == '.') cout << 'F';
                }
            }
        }
        else if(output[0][i][0]=='.' && output[0][i][1]=='*' && output[0][i][2]=='*' && output[0][i][3]=='*' && output[0][i][4]=='*'){ //S
            cout << 'S';
        }
        else if(output[0][i][0]=='*' && output[0][i][1]=='.' && output[0][i][2]=='.' && output[0][i][3]=='.' && output[0][i][4]=='*'){ //HMNKUVWXY
            if(output[2][i][3] == '*' && output[4][i][3] == '*') cout << 'X';
            else if(output[2][i][3] == '*' && output[4][i][3] == '.') cout << 'Y';
            else if(output[2][i][3] == '.' && output[4][i][3] == '*' && output[3][i][2] == '*') cout << 'N';
            else{
                if(output[1][i][1] == '*') cout << 'M';
                else if(output[5][i][3] == '*' && output[6][i][2] == '.') cout << 'K';
                else if(output[5][i][3] == '*' && output[6][i][2] == '*') cout << 'V';
                else{
                    if(output[4][i][2] == '*') cout << 'W';
                    else if(output[6][i][2] == '*') cout << 'U';
                    else cout << 'H';
                }
            }
        }
        else if(output[0][i][0]=='.' && output[0][i][1]=='.' && output[0][i][2]=='*' && output[0][i][3]=='*' && output[0][i][4]=='*'){ //J
            cout << 'J';
        }
        else if(output[0][i][0]=='*' && output[0][i][1]=='.' && output[0][i][2]=='.' && output[0][i][3]=='.' && output[0][i][4]=='.'){ //L
            cout << 'L';
        }
    }

    cout << endl;

    return 0;
}


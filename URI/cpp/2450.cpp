#include <iostream>

using namespace std;

int main(){

    int n, m, non_zero_pos = -1, row_sum = 0, prev_row_sum = 0;
    bool non_zero_pos_selected = false;
    bool ladder = true;

    cin >> n >> m;

    int matrix[n][m];

    for(int i=0;i<n;i++){
        non_zero_pos_selected = false;
        prev_row_sum = row_sum;
        row_sum = 0;
        for(int j=0;j<m;j++){
            cin >> matrix[i][j];
            if(i > 0){
                if(prev_row_sum == 0 && matrix[i][j] != 0){
                    ladder = false;
                }
            }
            row_sum += matrix[i][j];
            if(ladder){
                if(!non_zero_pos_selected && matrix[i][j] != 0){
                    if(j > non_zero_pos){
                        non_zero_pos = j;
                        non_zero_pos_selected = true;
                   }
                   else{
                        ladder = false;
                   }
                }
            }
        }
    }

    cout << ((ladder) ? 'S' : 'N') << endl;

    return 0;
}

#include <algorithm>
#include <iostream>

using namespace std;

int main(){

    int n, m;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> m;
//        cin.ignore();
        int number = 0;
        int students[m];
        int students_sorted[m];
        for(int j=0; j<m; j++){
            cin >> students[j];
            students_sorted[j] = students[j];
        }
        sort(students_sorted, students_sorted + m, greater<int>());
        for(int j=0; j<m; j++){
            if(students_sorted[j] ==  students[j]) number++;
        }
        cout << number << endl;
//        cin.ignore();
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool sort_by_third(const tuple<int, string, float> &a, const tuple<int, string, float> &b){
    return (get<2>(a) < get<2>(b));
}

int main(){

    int n;
    float buffer = -1;
    int buffer_idx = 0;
    int buffer_idx_end = 0;

    vector <tuple<int, string, float>> v;

    cin >> n;

    int r[n];
    float m[n];
    string name[n];

    for(int i=0; i<n; i++){
        cin >> r[i] >> name[i] >> m[i];
        v.push_back(make_tuple(r[i], name[i], m[i]));
    }

    sort(v.rbegin(), v.rend(), sort_by_third);

    // Checking the repetition of marks. if repitiiton ends, sort from idx to idx_end part of the vector by defaul/first element(roll)

    for(int i=0; i<n; i++){
        if(get<2>(v[i]) == buffer){
                buffer_idx_end++;
        }
        else{
            if(buffer_idx_end > 0){
                sort(v.begin()+buffer_idx, v.begin()+buffer_idx_end+1); // partially sort the vector by first element(roll)
            }
            buffer = get<2>(v[i]);
            buffer_idx = i;
            buffer_idx_end = i;
        }
    }

     // no way to check if repitition ends if it's the end of list. so, manually sorting last group if last group exists
    if(buffer_idx_end != buffer_idx)
        sort(v.begin()+buffer_idx, v.end());

    cout << "Roll | Name       | Marks\n-------------------------" << endl;

    for(int i=0; i<n; i++){
        cout << setw(4) << get<0>(v[i]) << " | " << get<1>(v[i]);
        for(int j=1; j<(11-(get<1>(v[i]).length())); j++){
            cout << " ";
        }

        cout << " | " << get<2>(v[i])<< endl;
    }

    return 0;
}

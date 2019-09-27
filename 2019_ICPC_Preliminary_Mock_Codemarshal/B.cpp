#include <bits/stdc++.h>
using namespace std;

bool sort_by_third(const tuple<int, string, float> &a, const tuple<int, string, float> &b){
    return (get<2>(a) < get<2>(b));
}

int main(){

//    fstream cin;
//    cin.open("t.txt");

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

//    for(int i=0; i<n; i++){
//        cout << setw(4) << get<0>(v[i]) << " | " << get<1>(v[i]);
//        for(int j=1; j<(11-(get<1>(v[i]).length())); j++){
//            cout << " ";
//        }
//
//        cout << " | " << get<2>(v[i])<< endl;
//    }


    for(int i=0; i<n; i++){
        if(get<2>(v[i]) == buffer){
                buffer_idx_end++;
        }
        else{
            if(buffer_idx_end > 0){
                sort(v.begin()+buffer_idx, v.begin()+buffer_idx_end+1);
            }
            buffer = get<2>(v[i]);
            buffer_idx = i;
            buffer_idx_end = i;
        }
//            cout << buffer_idx << "  " << get<2>(v[buffer_idx]) << "  " << buffer_idx_end << endl;
    }

    if(buffer_idx_end != buffer_idx)
//        partial_sort(v.begin()+buffer_idx, v.begin()+buffer_idx_end-1, v.end());
        sort(v.begin()+buffer_idx, v.end());

//    sort(v.begin()+0, v.begin()+4);

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

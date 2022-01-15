#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int r; cin >> r;
        string str; cin >> str;
        for(int i = 0; i < str.length(); i++){
            for(int j = 0; j < r; j++) cout << str[i];
        }
        cout << "\n";
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    string str; cin >> str;
    int idx = 0;
    while(idx < str.length()){
        for(int i = 0; i < 10 && idx < str.length(); i++, idx++){
            cout << str[idx];
        }
        cout << "\n";
    }
    
    return 0;
}
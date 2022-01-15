#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        string str; cin >> str;
        int score = 0, cnt = 1;
        for(char c : str){
            if(c == 'O') score += cnt++;
            else cnt = 1;
        }
        cout << score << "\n";
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int alpha[26];

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    string str; cin >> str;
    for(char c : str) alpha[c - 'a']++;
    for(int out : alpha) cout << out << " ";

    return 0;
}
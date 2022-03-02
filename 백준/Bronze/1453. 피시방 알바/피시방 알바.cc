#include <bits/stdc++.h>
using namespace std;
bool check[103];

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int N; cin >> N;
    int ans = 0;
    for(int i = 0; i < N; i++){
        int num; cin >> num;
        if(check[num]) ans++;
        check[num] = true;
    }
    cout << ans;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
int S[303];
ll mem[303][303];
const int MOD = 1e9 + 7;

ll dp(ll s, ll e){
    if(mem[s][e] != -1) return mem[s][e];
    else if(s == e) return 1;
    ll ret = 0;
    for(int i = s + 1; i < e; i += 2){
        if(S[s] + S[i] == 1){
            ret = (ret + (dp(s + 1, i) * dp(i + 1, e) % MOD)) % MOD;
        }
    }
    return mem[s][e] = ret;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    char tmp;
    int cnt = 0;
    while(cin >> tmp) S[cnt++] = tmp - '0';
    for(int i = 0; i < 303; i++) fill(mem[i], mem[i] + 303, -1);
    cout << dp(0, cnt);

    return 0;
}
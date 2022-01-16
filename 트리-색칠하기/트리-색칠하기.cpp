#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll color[200003], ans;
vector<ll> adj[200003];
bool isVisited[200003];

void dfs(int x, int c){
    if(isVisited[x]) return;
    isVisited[x] = true;
    if(c != color[x]){
        c = color[x];
        ans++;
    }
    for(int next : adj[x]){
        dfs(next, c);
    }
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> color[i];
    for(int i = 0; i < n - 1; i++){
        ll a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1, 0);
    cout << ans;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
vector<int> adj[100003];
pii Data[100003];
bool isVisited[100003];
map<pii, int> m;
int min_val = 1e9, node;
vector<int> ans;

pii dfs1(int x){
    isVisited[x] = true;
    pii ret = {1, 0};
    for(int next : adj[x]){
        if(!isVisited[next]){
            pii tmp = dfs1(next);
            ret.first += tmp.first; ret.second += tmp.second;
            if(m.find({x, next}) == m.end()) ret.second++;
        }
    }
    return Data[x] = ret;
}
void dfs2(int x, int cedge_num){
    isVisited[x] = true;
    if(min_val > cedge_num + Data[x].second){
        min_val = cedge_num + Data[x].second;
        node = x;
    }
    for(int next : adj[x]){
        if(!isVisited[next]){
            dfs2(next, cedge_num + Data[x].second - Data[next].second + (m.find({x, next}) == m.end() ? -1 : 1));
        }
    }
    return;
}
void dfs3(int x){
    isVisited[x] = true;
    for(int next : adj[x]){
        if(!isVisited[next]){
            if(m.find({x, next}) == m.end()) ans.push_back(m[{next, x}]);
            dfs3(next);
        }
    }
    return;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    for(int i = 0; i < n - 1; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        m[{u, v}] = i;
    }
    dfs1(1);
    memset(isVisited, false, sizeof(isVisited));
    dfs2(1, 0);
    memset(isVisited, false, sizeof(isVisited));
    dfs3(node);
    int cnt = 0;
    sort(ans.begin(), ans.end());
    for(int i = 0; i < n - 1; i++){
        if(cnt < ans.size() && i == ans[cnt]){
            cnt++;
            cout << 1;
        }else cout << 0;
    }

    return 0;
}
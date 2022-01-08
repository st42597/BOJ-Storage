#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int INF = 1e9;
vector<pii> arr;
vector<int> posx, posy;
int dp[1003][1003];
int dx[] = {-1, -1, 1, 1};
int dy[] = {-1, 1, -1, 1};

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        arr.push_back({x, y});
        posx.push_back(x);
        posy.push_back(y);
    }
    sort(posx.begin(), posx.end());
    posx.erase(unique(posx.begin(), posx.end()), posx.end());
    sort(posy.begin(), posy.end());
    posy.erase(unique(posy.begin(), posy.end()), posy.end());
    for(pii cor : arr){
        int x = lower_bound(posx.begin(), posx.end(), cor.first) - posx.begin() + 1;
        int y = lower_bound(posy.begin(), posy.end(), cor.second) - posy.begin() + 1;
        dp[x][y]++;
    }
    
    for(int i = 1; i <= posx.size(); i++){
        for(int j = 1; j <= posy.size(); j++){
            dp[i][j] += dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
        }
    }
    int ans = INF;
    for(int corx : posx){
        for(int cory : posy){
            for(int i = 0; i < 4; i++){
                int x = lower_bound(posx.begin(), posx.end(), corx + dx[i]) - posx.begin() + 1;
                int y = lower_bound(posy.begin(), posy.end(), cory + dy[i]) - posy.begin() + 1;
                vector<int> tmp;
                tmp.push_back(dp[x][y]);
                tmp.push_back(dp[posx.size()][y] - dp[x][y]);
                tmp.push_back(dp[x][posy.size()] - dp[x][y]);
                tmp.push_back(dp[posx.size()][posy.size()] - dp[posx.size()][y] - dp[x][posy.size()] + dp[x][y]);
                sort(tmp.begin(), tmp.end());
                ans = min(ans, tmp[3]);
            }
        }
    }
    cout << ans;

    return 0;
}
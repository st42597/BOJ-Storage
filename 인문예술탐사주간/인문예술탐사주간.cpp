#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> arr, pos;
vector<pair<ll, int>> dp;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, q; cin >> n >> q;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        arr.push_back(tmp);
        pos.push_back(tmp);
    }
    pos.push_back(0); pos.push_back(1e7 + 1);
    sort(pos.begin(), pos.end());
    dp.resize(pos.size());
    for(int i = 0; i < n; i++){
        int idx = lower_bound(pos.begin(), pos.end(), arr[i]) - pos.begin();
        dp[idx].first += arr[i];
        dp[idx].second += 1;
    }
    for(int i = 1; i < pos.size(); i++){
        dp[i].first += dp[i - 1].first;
        dp[i].second += dp[i - 1].second;
    }
    while(q--){
        ll x; cin >> x;
        int idx = lower_bound(pos.begin(), pos.end(), x) - pos.begin();
        if(x != pos[idx]) idx--;
        ll left = x * dp[idx].second - dp[idx].first;
        ll right = (dp[pos.size() - 1].first - dp[idx].first) - x * (dp[pos.size() - 1].second - dp[idx].second);
        cout << left + right << "\n";
    }

    return 0;
}

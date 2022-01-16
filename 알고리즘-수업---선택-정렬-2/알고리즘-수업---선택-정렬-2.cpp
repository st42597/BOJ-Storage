#include <bits/stdc++.h>
using namespace std;
int arr[10003];

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, k; cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = n - 1; i > 0 && k; i--){
        int max_val = 0, idx;
        for(int j = 0; j <= i; j++){
            if(max_val < arr[j]){
                max_val = arr[j];
                idx = j;
            }
        }
        if(i != idx){
            swap(arr[i], arr[idx]);
            k -= 1;
        }
    }
    if(k) cout << -1;
    else for(int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}
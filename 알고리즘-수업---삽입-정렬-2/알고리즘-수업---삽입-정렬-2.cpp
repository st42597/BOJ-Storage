#include <bits/stdc++.h>
using namespace std;
int arr[10003];

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, k; cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 1; i < n && k; i++){
        int pos = i, tmp = arr[pos];
        while(pos > 0 && arr[pos - 1] > tmp && k){
            arr[pos] = arr[pos - 1];
            pos--; k--;
        }
        if(pos != i && k){
            arr[pos] = tmp;
            k--;
        }
    }
    if(k) cout << -1;
    else for(int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}
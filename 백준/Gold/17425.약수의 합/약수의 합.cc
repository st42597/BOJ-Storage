#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[1000003];

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    for(int i = 1; i <= 1000000; i++){
        for(int j = i; j <= 1000000; j += i){
            arr[j] += i;
        }
        arr[i] += arr[i - 1];
    }
    int N; cin >> N;
    for(int i = 0; i < N; i++){
        int tmp; cin >> tmp;
        cout << arr[tmp] << "\n";
    }

    return 0;
}
#include "bits/stdc++.h"
#define pb push_back
#define fi first
#define se second
#define all(x) ((x).begin()), ((x).end())
#define compress(x) sort(all(x)), (x).erase(unique(all(x)),(x).end())
#define siz(x) ((int)((x).size()))
#define endl '\n'
using namespace std;
using ll = long long;
using ull = unsigned long long;

int n, m;
const ll mod = 1e9 + 7;
vector<vector<ll>> v;

vector<vector<ll>> p(vector<vector<ll>> a, vector<vector<ll>> b){
    vector<vector<ll>> ret(n, vector<ll>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                ret[i][j] += a[i][k] * b[k][j];
                ret[i][j] %= mod;
            }
        }
    }
    return ret;
}

vector<vector<ll>> f(ll b){
    if(b == 1) return v;
    if(b == 2) return p(v, v);
    auto t = f(b/2);
    if(b & 1) return p(p(t, t), v);
    else return p(t, t);
}

#include <unistd.h>
#include <sys/stat.h>
#include <sys/mman.h>
template<typename T>
struct FASTIO {
    char *p,O[2000000],*d;
    FASTIO() {
        struct stat st;fstat(0, &st);d=O;
        p=(char*)mmap(0,st.st_size,1,1,0,0);
    }
    ~FASTIO() {
        write(1,O,d-O);
    }
    inline T get() {
        T x=0;bool e;p+=e=*p=='-';
        for(char c=*p++;c&16;x=10*x+(c&15),c=*p++);
        return e?-x:x;
    }
    inline void put(T x) {
        if(x<0)*d++='-',x=-x;
        char t[16],*q=t;
        do *q++=x%10|48;while(x/=10);
        do *d++=*--q;while(q!=t);
        *d++=10;
    }
};

FASTIO<int> IO;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);

    n = IO.get(); m = IO.get(); v = vector<vector<ll>>(n, vector<ll>(n));
    for(int i=0; i<m; i++) {
        int a = IO.get(), b = IO.get();
        v[a-1][b-1] = 1;
        v[b-1][a-1] = 1;
    }
    ll d = IO.get();
    auto t = f(d);
    cout << t[0][0] << endl;
}

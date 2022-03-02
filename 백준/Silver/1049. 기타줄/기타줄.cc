#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, min_6 = (1 << 31) - 1, min_1 = (1 << 31) - 1;
    cin >> n >> m;
    while(m--)
    {
        int a, b;
        cin >> a >> b;
        min_6 = min(min_6, a);
        min_1 = min(min_1, b);
    }
    if(min_6 < min_1 * 6)
    {
        int a = n / 6;
        if(min_6 > min_1 * (n - a * 6))
            cout << min_6 * a + min_1 * (n - a * 6);
        else
            cout << min_6 * (a + 1);
    }
    else
        cout << n * min_1;
    return 0;
}

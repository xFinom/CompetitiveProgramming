#include <bits/stdc++.h>

#define ENDL '\n'

using namespace std;

typedef long long ll;
typedef vector<int> vi;

void solve()
{
    ll n,m;
    vi a;

    cin >> n;

    for (int i = 0; i < n - 1; i++){
        cin >> m;
        a.push_back(m);
    }

    sort(a.begin(), a.end());

    for (int i = 1; i <= n; i++){
        if(a[i-1] != i){
            cout << i;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
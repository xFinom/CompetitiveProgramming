#include <bits/stdc++.h>

#define ENDL '\n'

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef list<int> li;

void solve()
{
    ll n,e,t = 0;

    cin >> n;

    vector<ll> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 1; i < n; i++){
        if(a[i] < a[i-1]){
            t += a[i-1] - a[i];
            a[i] += a[i-1] - a[i];
        }
    }

    cout << t;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
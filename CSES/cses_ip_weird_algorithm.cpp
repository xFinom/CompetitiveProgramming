#include <bits/stdc++.h>

#define ENDL '\n'

using namespace std;

typedef long long ll;
typedef vector<int> vi;

void solve()
{
    ll n;

    cin >> n;

    while(n > 1){
        cout << n << " ";

        n = n%2 == 0? n/2 : (n*3) + 1;
        }
    
    cout << n;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
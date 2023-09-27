#include <bits/stdc++.h>

#define ENDL '\n'

using namespace std;

typedef long long ll;
typedef vector<int> vi;

void solve()
{
    ll n,m,x,ans = 0;
    vi a;

    cin >> n >> x;

    for (int i = 0; i < n; i++){
        cin >> m;
        a.push_back(m);
    }

    int l = 0, r = 0, sum = 0;

    while(l < a.size()){
        if(r < a.size() and sum < x){
            sum += a[r];
            r++;
        }
        else if(sum >= x){
            if(sum == x){
                ans++;
            }

            sum -= a[l];
            l++;
        }
        else{
            break;
        }
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
#include <bits/stdc++.h>

#define ENDL '\n'

using namespace std;

typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int m = 0, a = 1;
    string s;

    cin >> s;

    for(int i = 1; i <= s.size(); i++){
        if(s[i-1] == s[i])
            a++;
        else{
            m = max(a,m);
            a = 1;
        }
    }

    cout << m;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
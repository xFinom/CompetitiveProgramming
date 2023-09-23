#include <bits/stdc++.h>

#define ENDL '\n'

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef list<int> li;

void solve()
{
    int n;
    string s;
    map<string,int> mp;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;

        if(mp.count(s) == 0)
            cout << "OK" << ENDL;
        else
            cout << s << mp[s] << ENDL;

        mp[s]++;
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

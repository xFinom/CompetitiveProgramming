#include <bits/stdc++.h>

#define ENDL '\n'

using namespace std;

typedef long long ll;
typedef vector<int> vi;

void solve()
{
    string s;

    cin >> s;

    for (int i = 0; i < s.size() - 1; i+=2)
    {
        swap(s[i], s[i+1]);
    }
    
    cout << s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
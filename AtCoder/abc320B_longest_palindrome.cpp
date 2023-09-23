#include <bits/stdc++.h>

#define ENDL '\n'

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef list<int> li;

void solve()
{
    string s,sub,r;
    int size = 1;

    cin >> s;

    for(int i = 0; i < s.size(); i++){
        for(int j = i+1; j <= s.size(); j++){
            sub = s.substr(i,j - i);

            for(int k = sub.size() - 1; k >= 0; k--)
                r += sub[k];

            if(r == sub and sub.size() > size)
                size = sub.size();

            r = "";
        }
    }
    cout << size;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}

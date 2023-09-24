#include <bits/stdc++.h>

#define ENDL '\n'

using namespace std;

typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int n, c;
    string s, letters = "YES";

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s;

        for (int j = 0; j < 3; j++)
        {
            if (toupper(s[j]) == letters[j])
                c++;
        }

        if(c == 3){
            cout << "YES" << ENDL;
        }
        else{
            cout << "NO" << ENDL;
        }

        c=0;
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}

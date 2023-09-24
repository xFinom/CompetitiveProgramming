#include <bits/stdc++.h>

#define ENDL '\n'

using namespace std;

typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int t, n, m, lastPos = 0;
    bool flag = false;
    vector<vector<char>> carpet(20, vector<char>(20));
    string str = "vika";

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> carpet[i][j];
            }
        }

        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (carpet[i][j] == str[lastPos])
                {
                    flag = true;
                    break;
                }
            }

            if (flag){
                lastPos++;
                flag = false;
            }

            if (lastPos == 4)
                break;
        }

        if (lastPos == 4)
        {
            cout << "YES" << ENDL;
        }
        else
        {
            cout << "NO" << ENDL;
        }

        lastPos = 0;
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
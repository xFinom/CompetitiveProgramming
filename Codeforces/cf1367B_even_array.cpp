#include <bits/stdc++.h>

#define ENDL '\n'

using namespace std;

typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int t, n;
    vi numbers(50);
    int odds = 0, evens = 0;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];

            if (numbers[i] % 2 != i % 2 and i % 2 == 1)
                odds++;
            else if (numbers[i] % 2 != i % 2 and i % 2 == 0)
                evens++;
        }

        if(odds == evens)
            cout << odds << ENDL;
        else
            cout << -1 << ENDL;

        odds = 0;
        evens = 0;
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
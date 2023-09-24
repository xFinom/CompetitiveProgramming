#include <bits/stdc++.h>

#define ENDL '\n'

using namespace std;

typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int same = 0, max = -1;
    vi numbers(4);

    for (int i = 0; i < 4; i++)
    {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());
    
    for(int i = 0; i < 3; i++){
        if(numbers[i] == numbers[i+1]){
            same++;
        }
    }

    cout << same;

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

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,times;

    cin >> a >> b >> c;

    times = b/a;

    if(times > c)
        times = c;

    cout << times;

    return 0;
}

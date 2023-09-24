#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, minimum;

    cin >> n >> a >> b;

    if((a*n) < b)
        minimum = a*n;
    else
        minimum = b;

    cout << minimum;
}

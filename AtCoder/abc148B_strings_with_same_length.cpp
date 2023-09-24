#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    cin >> n;

    char s[n], t[n], st[n + n];

    cin >> s >> t;

    for(int i = 0, j = 0; i < n + n; i += 2, j++){
        st[i] = s[j];
        st[i+1] = t[j];
        cout << st[i] << st[i+1];
    }
}

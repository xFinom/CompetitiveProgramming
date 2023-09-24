#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,q,lowest,total;
    cin >> n >> p >> q;

    vector<int> dishes(n);

    for (int i = 0; i < n; i++)
        cin >> dishes[i];

    lowest = dishes[0];
    
    for(int i =0; i < n; i++)
        if(dishes[i] < lowest)
            lowest = dishes[i];

    total = (q + lowest < p) ? q + lowest : p;

    cout << total;
}

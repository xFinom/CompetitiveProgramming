#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,p,k,i=1,days=0,cycle;
    cin >> n >> m >> p;

    cycle = m;

    while(cycle <= n){
        days++;

        cycle = m + (i*p);
        i++;
    }

    cout << days;

    return 0;
}


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,maximum=0,highest,lowest;

    cin >> a >> b;

    if(a > b){
        highest = a;
        lowest = b;
        }
    else{
        highest = b;
        lowest = a;
        }

    maximum += highest;

    maximum += (--highest > lowest) ? highest : lowest;

    cout << maximum;
}

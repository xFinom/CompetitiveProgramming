#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, numbers[9] = {111,222,333,444,555,666,777,888,999}, i=0;
    
    cin >> n;

    while(n > numbers[i]){
        i++;
    }

    cout << numbers[i];

    return 0;
}

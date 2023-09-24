#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, precision;
    string pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

    cin >> n;

    precision = pi.length() - n - 2;

    for(int i = 0; i < precision; i++)
        pi.pop_back();

    cout << pi;
    
    return 0;
}

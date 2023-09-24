#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,subtotal,discount,total;

    cin >> n;

    subtotal = 800 * n;
    discount = (n/15) * 200;

    cout << subtotal - discount;
}

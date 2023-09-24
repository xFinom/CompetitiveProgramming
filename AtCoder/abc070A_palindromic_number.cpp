#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[3], aux;
    int n, reversed;

    cin >> str;

    n = stoi(str);

    swap(str[0], str[2]);

    reversed = stoi(str);

    if(n == reversed)
        cout << "Yes";
    else
        cout << "No";
}

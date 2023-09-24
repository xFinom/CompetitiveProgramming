#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> numbers(n);

    for (int i = 0; i < n; i++)
        cin >> numbers[i];
    
    for (int i = 0; i < numbers.size(); i++)
        if (numbers[i] % 2 == 0)
            cout << numbers[i] << " ";
}

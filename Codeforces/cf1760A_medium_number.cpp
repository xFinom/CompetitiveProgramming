#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(3), mediums(n);

    for(int i = 0; i < n; i++){
        cin >> numbers[0] >> numbers[1] >> numbers[2];
        sort(numbers.begin(), numbers.end());
        mediums[i] = numbers[1];
    }

    for (int i = 0; i < n; i++)
    {
        cout << mediums[i] << endl;
    }
    
    
    return 0;
}

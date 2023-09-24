#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, nearest,distance;
    cin >> n;
    distance = n % 5;
    if(distance >= 3)
        nearest = n + 5 - distance;
    else{
        nearest = n - distance;
    }

    cout << nearest;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
    int connections[14][2] = {{1,2},{1,3},{2,4},{2,5},{4,8},{4,9},{5,10},{5,11},{3,6},{3,7},{6,12},{6,13},{7,14},{7,15}},a,b;

    cin >> a >> b;

    for (int i = 0; i < 14; i++)
    {
        if(a == connections[i][0] and b == connections[i][1]){
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
    
    return 0;
}

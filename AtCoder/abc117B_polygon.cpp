#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, max, maxPos=0, sum=0;
    
    cin >> n;

    vector<int> sides(n);

    for(int i = 0; i < n; i++)
        cin >> sides[i];

    max = sides[0];

    for(int i = 0; i < n; i++)
        if(sides[i] > max){
            max = sides[i];
            maxPos = i;
        }

    for(int i = 0; i < n; i++)
        if(i != maxPos)
            sum += sides[i];

    if(max < sum)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}

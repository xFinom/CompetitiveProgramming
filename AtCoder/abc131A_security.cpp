#include <bits/stdc++.h>

using namespace std;

int main()
{
    char code[4];

    cin >> code;

    for(int i = 0; i < 3; i++){
        if(code[i] == code[i+1]){
            cout << "Bad";
            return 0;
        }
    }

    cout << "Good";

    return 0;
}

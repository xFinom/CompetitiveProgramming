#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> numbers(8);

    for(int i = 0; i < 8; i++){
        cin >> numbers[i];
        
        if(numbers[i] < 100 or numbers[i] > 675 or numbers[i]%25 != 0){
            cout << "No";
            return 0;
        }
    }

    for(int i = 0; i < 7; i++){
        if(numbers[i] > numbers[i+1]){
         cout << "No";
         return 0;
         }
    }

    cout << "Yes";
    return 0;
}


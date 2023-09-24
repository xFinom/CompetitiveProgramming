#include <bits/stdc++.h>

using namespace std;

int main()
{
    string w;
    multiset<char> ms;
    set<char> s;

    cin >> w;

    for(int i = 0; i < w.size(); i++){
        ms.insert(w[i]);
        s.insert(w[i]);
    }

    for(auto x: s){
        if(ms.count(x)%2 != 0){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}

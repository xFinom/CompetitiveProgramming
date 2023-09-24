#include <bits/stdc++.h>

#define ENDL '\n'

using namespace std;

typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int n;
    bool flag = false;
    vector<vector<char>> tiles(50, vector<char>(50)); 

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> tiles[i][j];
        }
    }
    
    for (int i = 1; i < n-1; i++)
    {
        if(tiles[0][0] == '.'){
            break;
        }
        
        for(int j = 1; j < n-1; j++){
            if(tiles[i][j] == '.' and tiles[i-1][j] == '.' and tiles[i][j-1] == '.' and tiles[i+1][j] == '.' and tiles[i][j+1] == '.'){
                tiles[i][j] = tiles[i-1][j] = tiles[i][j-1] = tiles[i+1][j] = tiles[i][j+1] = '#';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++){
            if(tiles[i][j] == '.'){
                flag = true;
            }
        }
    }
    
    if(flag){
        cout << "NO";
    }
    else{
        cout << "YES";
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
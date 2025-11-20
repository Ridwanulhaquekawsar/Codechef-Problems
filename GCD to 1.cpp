#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n, m;
vector< vector<ll> >mat;
ll i, j;
ll row, col;

void solve(){
    cin >> row >> col;
    mat.clear();
    
    mat.assign(row, vector<ll>(col, 2));
    
    n = max(row, col);
    i = 0;
    j = 0;
    
    while(n--){
        mat[i][j] = 3;
        
        i = min(i + 1, row - 1);
        j = min(j + 1, col - 1);
    }
    
    for(ll i = 0; i < row; i++){
        for(ll j = 0; j < col; j++){
            cout << mat[i][j] << " ";
        }
        
        cout << nl;
    }
}

int main(){
    FastIO(); cin >> t; while(t--) solve();
}

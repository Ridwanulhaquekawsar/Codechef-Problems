#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n;

void solve(){
    cin >> n;
    
    cout << n << " ";
    
    while(n--) if(n != 0) cout << n << " ";
    
    cout << nl;
}

int main(){
    FastIO(); cin >> t; while(t--) solve();
}

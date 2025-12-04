#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n;
ll mx;
ll bx;

void solve(){
    cin >> n;
    
    mx = 0;
    
    for(ll i = 1; i <= n; i++){
        cin >> bx;
        if(bx == 0) mx++;
    }
    
    cout << max(mx, n - mx) << nl;
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}

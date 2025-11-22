#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, a, b, n;
ll x;

void solve(){
    cin >> a >> b >> n;
    
    if(a % b == 0) cout << -1 << nl;
    else{
        x = ceil( (n * 1.0)/a) * a;
        
        if(x % b != 0) cout << x << nl;
        else cout << x + a << nl;
    }
}

int main(){
    FastIO(); cin >> t; while(t--) solve();
}

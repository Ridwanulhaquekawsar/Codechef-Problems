#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, a, b;
ll ans;
ll x;

ll lcm(ll i, ll j){
    return (i/__gcd(i, j) ) * j;
}    

void solve(){
    cin >> a >> b;
    
    x = __gcd(a, b);
    
    ans = 0;
    ans = lcm(a, x) - __gcd(b, x);
    
    cout << ans << nl;
}

int main(){
    FastIO(); cin >> t; while(t--) solve();
}

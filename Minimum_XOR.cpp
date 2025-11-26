#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n;
vector<ll>a;
ll x, ans;

void solve(){
    cin >> n;
    a.resize(n);
    
    x = 0;
    
    for(auto &bx : a){
        cin >> bx;
        x ^= bx;
    }
    
    ans = x;
    
    for(ll i = 0; i < n; i++) ans = min(ans, x ^ a[i]);
    
    cout << ans << nl;
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}

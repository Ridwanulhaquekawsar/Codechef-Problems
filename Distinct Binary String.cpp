#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n;
ll ans;
string s;

void solve(){
    cin >> n >> s;
    
    ans = 0;
    
    for(ll i = 0; i < s.size(); i++) if(s[i] != s[i - 1]) ans++;
    
    cout << ans << nl;
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}

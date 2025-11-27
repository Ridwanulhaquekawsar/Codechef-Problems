#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'
const ll MOD = 1000000007;

ll t, n;
vector<ll>pow2;
vector<ll>Ns;
ll maxN;

void solve(){
    cin >> t;
    Ns.resize(t);
    
    maxN = 0;
    for(ll i = 0; i < t; i++){
        cin >> Ns[i];
        maxN = max(maxN, Ns[i]);
    }
    
    pow2.resize(maxN);
    pow2[0] = 1;
    
    for(ll i = 1; i < maxN; i++) pow2[i] = (pow2[i-1] * 2) % MOD;
    
    for(auto &x : Ns) cout << pow2[x-1] << nl;
}

int main(){
    FastIO();
    
    solve();
}

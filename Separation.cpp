#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n, x;
vector<ll> v;

void solve(){
    cin >> n >> x;
    v.resize(n);
    
    for(auto &bx : v) cin >> bx;
    sort(v.begin(), v.end());
    
    for(ll i = 0; i < n - 1; i++){
    
        if(v[i] < x && v[i + 1] > x){
            cout << "No" << nl;
            return;
        }
    }
    
    cout << "Yes" << nl;
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}

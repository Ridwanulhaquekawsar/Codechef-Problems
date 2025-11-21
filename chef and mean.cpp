#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n, bx;
double sum;
vector<ll>a;
map<double, ll>mp;

void solve(){
    cin >> n;
    a.resize(n);
    mp.clear();
    
    sum = 0;
    
    for(ll i = 1; i <= n; i++){
        cin >> bx;
        
        sum += (double)bx;
        if(mp[bx] == 0) mp[bx] = i;
    }
    
    if(mp[sum/n]) cout << mp[sum/n] << nl;
    else cout << "Impossible" << nl;
}

int main(){
    FastIO(); cin >> t; while(t--) solve();
}

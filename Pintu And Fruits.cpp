#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

#define out(x) cout << (x) << nl
#define in cin >>

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"

#define f first
#define s second
#define pb push_back

#define pll pair<ll, ll>
#define vll vector<ll>

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rrep(i, n) for(ll i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for(ll i = a; i <= b; i++)
#define rrep1(i, b, a) for(ll i = b; i >= a; i--)

/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/

ll t;
ll n, m;
vll v1, v2;
map<ll, ll>mp;
ll mn;

void solve(){
    in n >> m;
    mp.clear();
    v1.resize(n);
    v2.resize(n);
    
    rep(i, n) in v1[i];
    rep(i, n) in v2[i];
    
    rep(i, n) mp[v1[i]] += v2[i];
    
    mn = INT_MAX;
    
    for(auto &[fi, pi] : mp) mn = min(mn, pi);
    
    out(mn);
}

int main(){
    FastIO(); 
    
    t = 1;
    in t;
    while(t--) solve();
}

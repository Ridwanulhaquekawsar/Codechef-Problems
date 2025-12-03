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
ll n, k;
vector<pll>v;
ll ans;

void solve(){
    in n >> k;
    v.resize(n);
    
    rep(i, n) in v[i].first >> v[i].second;
    
    while(k > 0){
        if(k < v[0].first){
            v[0].first -= k;
            k = 0;
        }
        else{
            k -= v[0].first;
            v.erase(v.begin());
        }
    }
    
    ans = 0;
    
    for(auto &[fst, snd] : v) ans += (fst * snd);
    
    out(ans);
}

int main(){
    FastIO(); 
    
    t = 1;
    in t;
    while(t--) solve();
}

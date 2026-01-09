#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

#define out(x) cout << (x) << nl
#define in cin >>

#define pinf LLONG_MAX
#define ninf LLONG_MIN

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"

#define f first
#define sc second
#define pb push_back
#define ppb pop_back
#define sz(x) (ll)x.size()

#define rs(v, n) (v).resize(n)
#define as(v, sz, val) (v).assign(sz, val)

#define pll pair<ll, ll>
#define vll vector<ll>
#define vvll vector< vector<ll> >
#define vpll vector<pll>
#define S string

#define St set<ll>
#define Ms multiset<ll>
#define Mp map<ll, ll>
#define Ump unordered_map<ll, ll>

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rrep(i, n) for(ll i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for(ll i = a; i <= b; i++)
#define rrep1(i, b, a) for(ll i = b; i >= a; i--)

bool isPrime(ll n){

    if(n == 1) return 0;
    else if(n == 2) return 1;
    else if(n % 2 == 0) return 0;
    
    for(ll i = 3; i <= n/i; i += 2){
        if(n % i == 0) return 0;
    }
    
    return 1;
}

/*
ll lcm(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}
*/

/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/

ll T;
ll n;
vll a, b;
vll prf, suf;
ll mn, mx;

void solve(){
    in n;
    rs(a, n);
    rs(b, n);
    as(prf, n, -1);
    as(suf, n, -1);
    
    rep(i, n) in a[i];
    rep(i, n) in b[i];
    
    // Prefix ascending order ! 
    prf[0] = min(a[0], b[0]);
    
    rep1(i, 1, n-1){
        mx = max(a[i], b[i]);
        mn = min(a[i], b[i]);
        
        if(mn >= prf[i-1]) prf[i] = mn;
        else if(mx >= prf[i-1]) prf[i] = mx;
        else break;
    }
    
    // Suffix ascending order ! 
    suf[n-1] = max(a[n-1], b[n-1]);
    
    rrep1(i, n-2, 0){
        mn = min(a[i], b[i]);
        mx = max(a[i], b[i]);
        
        if(mx <= suf[i+1]) suf[i] = mx;
        else if(mn <= suf[i+1]) suf[i] = mn;
        else break;
    }
    
    
    rep(i, n){
        mn = min(a[i], b[i]);
        mx = max(a[i], b[i]);
        
        // Only one down move will decide everything ! 
        if(  (i == 0 && suf[i+1] != -1 && mx <= suf[i+1]) || (i == n-1 && prf[i-1] != -1 && mn >= prf[i-1]) || ( (prf[i-1] != -1 && mn >= prf[i-1]) && (suf[i+1] != -1 && mx <= suf[i+1]) )  ){
            Yes;
            return;
        }
    }
    
    No;
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

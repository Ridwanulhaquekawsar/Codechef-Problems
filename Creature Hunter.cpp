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

ll t;
ll n;
ll s, da;
ll h;
vll d;
ll ans;
ll att;

void solve(){
    in n >> h;
    as(d, 3, 0);
    
    while(n--){
        in s >> da;
        d[s] = max(d[s], da);
    }
    
    ans = pinf;
    
    if(d[1] > 0) ans = min(ans, (h + d[1] - 1)/d[1]);
    if(d[2] > 0) ans = min(ans, 2 * ( (h + d[2] - 1)/d[2])  );
    
    if(d[2] > 0){
        att = h/d[2];
        
        if( (att * d[2] < h) && (att * d[2] + d[1] >= h) ){
            ans = min(ans, att * 2 + 1);
        }
    }
    
    out(ans);
}

int main(){
    FastIO(); 
    
    t = 1;
    in t;
    while(t--) solve();
}

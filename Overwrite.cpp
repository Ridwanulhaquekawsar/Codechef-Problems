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
#define fr front()
#define bc back()
#define bg begin()
#define ed end()
#define pu push
#define po pop
#define pf push_front
#define pb push_back
#define pob pop_back()
#define pof pop_front()
#define emp emplace
#define clr clear()
#define wh while
#define emp_fr emplace_front
#define emp_bc emplace_back
#define mn_ele min_element
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
#define Q queue<ll>
#define Dq deque<ll>

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
ll m, n;
vll a, b;
bool ok;
ll idx;

void solve(){
    in n >> m;
    rs(a, n);
    rs(b, m);
    
    rep(i, n) in a[i];
    rep(i, m) in b[i];
    
    rotate(b.bg, mn_ele(all(b) ), b.ed);
    
    if(m == 1){
        rep(i, n) cout << min(b[0], a[i]) << " ";
        cout << nl;
    }  
    else{
        ok = 0;
        
        rep(i, n){
        
            if(a[i] == b[0] && (i + m - 1 < n) ){
            
                rep1(j, i+1, i + m - 1){
                
                    if(a[j] > b[j - i]){
                        ok = 1;
                        idx = i;
                        break;
                    }
                    else if(a[j] < b[j - i]) break;
                }
                
                if(ok) break;
            }
            else if(i + m - 1 < n && a[i] > b[0]){
                ok = 1;
                idx = i;
                break;
            }
        }
        
        
        if(ok){
            rep1(i, idx, n-1) a[i] = b[0];
            rep1(i, n - m, n - 1) a[i] = b[i - (n - m)];
            
            rep(i, n) cout << a[i] << " ";
            cout << nl;
        }
        else{
            rep(i, n) cout << a[i] << " ";
            cout << nl;
        }
    }  
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

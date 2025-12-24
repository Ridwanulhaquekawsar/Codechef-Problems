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

#define rs(v, n) (v).resize(n)
#define as(v, sz, val) (v).assign(sz, val)

#define pll pair<ll, ll>
#define vll vector<ll>
#define S string

#define St set<ll>
#define Ml multiset<ll>
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
ll g1, s1, g2, s2;

void solve(){
    in g1 >> s1 >> g2 >> s2;
    
    if(g1 >= g2){
        s1 += (g1 - g2) * 5;
        
        if(s1 == s2) Yes;
        else if(s1 > s2 && (s1 - s2) % 6 == 0) Yes;
        else No;
    }
    else{
        s1 -= (g2 - g1) * 5;
        
        if(s1 == s2) Yes;
        else if(s1 > 0 && s1 > s2 && (s1 - s2) % 6 == 0) Yes;
        else No;
    }
}

int main(){
    FastIO(); 
    
    t = 1;
    in t;
    while(t--) solve();
}

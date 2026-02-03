/*

Tuesday , 3 February , 2026 !

☑ 1st problem of the day done ! ╰┈➤ (Codechef Starters 169, Div 4)

• Problem No. D (Make K most frequent) !

• Problem Link : ⤵︎
https://www.codechef.com/problems/P3169?tab=statement

Observation : 🕵🏻‍♂️

• We're here tactically find out when it will give ans 0 and when it will give 1 and rest of the case it will be 2.

• Intially, If K is the most Frequent then answer will be 0. If it's not then we'll run a loop and will check for each prefix or Suffix where k become Most frequent, If one of the condition is met then simply Answer will be 1. And then For the Rest of the case Answer will be 2 Just.

• Because there's only three possible ans can have !

Solution Approach : 🎯

• Here we will maintain a Prefix map & a suffix map to see for each prefix and and suffix that where k become the most frequent !

• Most Frequent Condition is : Frequency [K] >= Frequency [Over All the other Elements] !

Time Complexity : O(nlogn) 📝

Implementation Uses : Prefix Map, Suffix Map </> 👨🏻‍💻 !

*/

C++ Code : 👇

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
#define rbg rbegin()
#define l_b lower_bound
#define u_b upper_bpund
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
#define mx_ele max_element
#define sz(x) (ll)x.size()
#define b_p __builtin_popcount

#define rs(v, n) (v).resize(n)
#define as(v, sz, val) (v).assign(sz, val)

#define pll pair<ll, ll>
#define vll vector<ll>
#define vvll vector< vector<ll> >
#define vpll vector<pll>
#define S string

#define St set<ll>
#define Ml multiset<ll>
#define Mlpll multiset<pll>
#define Mp map<ll, ll>
#define Ump unordered_map<ll, ll>
#define Q queue<ll>
#define Pq priority_queue<ll>
#define Dq deque<ll>

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rrep(i, n) for(ll i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for(ll i = a; i <= b; i++)
#define rrep1(i, b, a) for(ll i = b; i >= a; i--)

vll getDivisors(ll n){
    vll divisors;
    
    for(ll i = 1; i <= n/i; i++){
    
        if(n % i == 0){
            divisors.pb(i);
            if(i != n/i) divisors.pb(n/i);
        }
    }
    
    sort(all(divisors) );
    return divisors;
}

bool isPrime(ll n){

    if(n == 1) return 0;
    else if(n == 2) return 1;
    else if(n % 2 == 0) return 0;
    
    for(ll i = 3; i <= n/i; i += 2){
        if(n % i == 0) return 0;
    }
    
    return 1;
}

class cmp{
    public:
    bool operator()(){
        
    }
};

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
ll n, k;
Mp prf_mp, suf_mp;
vll v;
ll mx_fr;
Mlpll ml1, ml2;


void solve(){
    in n >> k;
    
    prf_mp.clr;
    suf_mp.clr;
    rs(v, n);
    ml1.clr;
    ml2.clr;
    
    mx_fr = ninf;
    
    rep(i, n){
        in v[i];
        
        prf_mp[v[i] ]++;
        suf_mp[v[i] ]++;
        ml1.insert({prf_mp[v[i] ], v[i]});
        ml2.insert({suf_mp[v[i] ], v[i]});
        
        mx_fr = max(mx_fr, prf_mp[v[i] ]);
    }
    
    if(mx_fr == prf_mp[k]){
        out(0);
        return;
    }
    
    rep(i, n){
        if(prf_mp[k] == mx_fr){
            out(1);
            return;
        }
        
        ml1.erase({prf_mp[v[i] ], v[i]});
        prf_mp[v[i] ]--;
        ml1.insert({prf_mp[v[i] ], v[i]});
        
        mx_fr = ml1.rbg->f;
    }
    
    
    rrep(i, n){
        if(suf_mp[k] == mx_fr){
            out(1);
            return;
        }
        
        ml2.erase({suf_mp[v[i] ], v[i]});
        suf_mp[v[i] ]--;
        ml2.insert({suf_mp[v[i] ], v[i]});
        
        mx_fr = ml2.rbg->f;
    }
    
    out(2);
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

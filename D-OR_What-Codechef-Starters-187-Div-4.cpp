/*

Sunday , 1 Fabruary , 2026 !

☑ 1st problem of the day done ! ╰┈➤ (Codechef Starters 187, Div 4)

• Problem No. D (OR What) !

• Problem Link : ⤵︎
https://www.codechef.com/problems/PORX?tab=statement

Observation : 🕵🏻‍♂️

If we keep track in which index value's OR with target value is equal to target value then we'll find the submask of this index value, Otherwise we'll do nothing !

Solution Approach : 🎯

At first, we'll run a loop and check where we find submask and where we can't find.

We'll maintain a answer array and until loop end we'll assign the submask value and keep undating till the end of the process.

Time Complexity : O(n) 📝

Implementation Uses : Submask(Bitmasking) </> 👨🏻‍💻 !

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
#define Pq priority_queue<ll>
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
ll n, x;
vll ans;
ll j;

void solve(){
    in n >> x;
    rs(ans, n);
    
    rep1(i, 1, n) ans[i] = 1;
    
    rep1(i, 1, n){
    
        if(ans[i] == i && ( (i | x) == x) ){
            j = i ^ x;
            if(j > 1 && j <= n) swap(ans[i], ans[j]);
        }
    }
    
    rep1(i, 1, n) cout << ans[i] << " ";
    cout << nl;
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

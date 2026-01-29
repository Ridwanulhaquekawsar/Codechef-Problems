/*

Thursday , 29 January , 2026 !

☑ 3rd problem of the day done ! ╰┈➤ (Codechef Starters 223, Div 4)

• Problem No. E (Add to First) !

• Problem Link : ⤵︎
https://www.codechef.com/problems/ADDFIRST?tab=statement

Observation : 🕵🏻‍♂️

If we find an Index where the first array's element is larger than the second one then It is not possible anymore to make an array a into an array b by increasing its elements !

And If we find later on an index where array a's and array b's elements are not the same of those index then we'll where a equal to larger value exists or not of this first array before i'th index where they are mismatched.

We'll calculate the prefix max of the first array so that we can operate the above of the operation well.

Solution Approach : 🎯

We'll precalculate the prefix max of the first array a, so that we compare both arrays and we can increase the first array elements by choosing expected value, so that we can make the first array equal to the second array exactly !
Time Complexity : O(n) 📝

Implementation Uses : Prefix Max, Adhoc </> 👨🏻‍💻 !

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
ll n;
vll a, b;
bool ok;
vll prf;

void solve(){
    in n;
    rs(a, n);
    rs(b, n);
    rs(prf, n);
    
    rep(i, n) in a[i];
    
    ok = 0;
    rep(i, n){
        in b[i];
        if(b[i] < a[i]) ok = 1;
    }
    
    if(ok){
        No;
        return;
    }
    
    prf[0] = a[0];
    rep1(i, 1, n - 1) prf[i] = max(a[i], prf[i - 1]);
    
    rep(i, n){
        if(a[i] != b[i] && i > 0 && a[i] <= prf[i - 1]){
            No;
            return;
        }
    }
    
    Yes;
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

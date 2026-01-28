/*

Wednesday , 28 January , 2026 !

☑ 1st problem of the day done ! ╰┈➤ (Codechef starters 171, Div 4)

• Problem No. B (ADVITIYA) ! 

• Problem Link : ⤵︎
https://www.codechef.com/problems/ADVITIYA?tab=statement

Observation : 🕵🏻‍♂️

-  This problem is about Modulo based Cyclic rotational wrap up ! 

• Small Source Case : 

-  If our Source is small than destination then it is simply means that we are going in forward direction (+ve),  so here if we add the total step and then do modulo then we will find the net steps like :  (2 - 1 + 5) % 5 = ans ! 

• Large Source Case : 

- As our source is bigger than the destination then it is simply means we can't go forward direction well as it is already reached max destination point so we have to go backward (-ve) and then we will go forward n steps to find the rest of the forward modulo steps which optimal small distance from source to destination ! 

Solution Approach : 🎯
-  We just write a simple formula like : (Source/Begining/Starting/Initial point  - Destination/Target/End/Last Point  + n(Total steps) ) % n ;

Time Complexity :  O(1) 🧠🧮𒅒🤔 📝 ! 

Implementation Uses :  Adhoc, Modulo Cyclic Rotation ! </> 👨🏻‍💻  !

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
S s, t;
ll ans;

void solve(){
    in s;
    t = "ADVITIYA";
    
    ans = 0;
    
    rep(i, 8) ans += (t[i] - s[i] + 26) % 26;
    
    out(ans);
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

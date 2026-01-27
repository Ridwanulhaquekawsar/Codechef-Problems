/*

Tuesday , 27 January , 2026 !

☑ 3rd problem of the day done ! ╰┈➤ (Codechef Starters 120, Div 4)

• Problem No. D (Sub or swp) ! 

• Problem Link : ⤵︎
https://www.codechef.com/problems/ASM120?tab=statement

Observation : 🕵🏻‍♂️

-  Here we are just subtracting over and and over by small val to the Big value untill small value become zero !  

-  We know that subtracting means dividing something at once quickly in mathematically very shortly just in one line operation, So, as the last large value divides other value completely and has no remainder so we can stop there ! 

-  Here, we noticed one thing that it is quite similar to the Uclidean GCD Concept , so we cal also use __gcd(x, y); function here ! 

Solution Approach : 🎯

-  Either we can run a loop by operating modulo operation over and over untill we reached a certain point where a one variable becomes zero  or,

-  Simpley, we can use Uclidean GCD C++ Builtin function to calculate the final non-zero largest Divisor Y's Value  at the end of the operation ! 

Time Complexity :  O(T. log(min(x, y)) 🧠🧮𒅒🤔 📝 ! 

Implementation Uses :  </> 👨🏻‍💻  !

*/

Code : 👇

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
ll x, y;
ll tmp;

void solve(){
    in x >> y;
    
    while(x != 0){
        if(x > y) swap(x, y);
        else y = y % x;
    }
    
    out(y);
}
int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}


Approach No. 2 : 👇

ll T;
ll x, y;
ll tmp;

void solve(){
    in x >> y;
    out(__gcd(x, y) );
}
int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

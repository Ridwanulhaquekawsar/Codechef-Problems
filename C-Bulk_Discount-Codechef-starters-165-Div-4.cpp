/*

Tuesday , 10 February , 2026 !

☑ 2nd problem of the day done ! ╰┈➤ (Codechef Starters 165, Div 4)


• Problem No. C (Bulk Discount) ! 


• Problem Link : ⤵︎
https://www.codechef.com/problems/BDISC


Observation & Intuition : 🕵🏻‍♂️

   •  Since we have been told to buy all the items here at minimum possible cost,  We wil try to sort the the array first to make the process easier and then we'll buy lowest possible priced items and then we'll gradually try to reduce the high priced items price value to make the cost as minimum as possible to buy all the items ! 



Solution Approach : 🎯

   •  At first we'll sort the array in ascending order.
   
   •  And then we'll add the value of lowest priced items  to our answer variable,  and later in this process, we'll move to the next one until the whole process ends ! 



Time Complexity :  O(nlogn) 📝


Implementation Uses :  Sorting, Adhoc </> 👨🏻‍💻  !

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
#define u_b upper_bound
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
ll n;
vll v;
ll ans;

void solve(){
    in n;
    rs(v, n);
    
    rep(i, n) in v[i];
    sort(all(v) );
    
    ans = 0;
    
    rep(i, n) if(v[i] - i > 0) ans += (v[i] - i);
    
    out(ans);
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

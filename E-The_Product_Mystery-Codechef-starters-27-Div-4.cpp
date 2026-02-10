/*

Tuesday , 10 February , 2026 !

☑ 3rd problem of the day done ! ╰┈➤ (Codechef Starters 27, Div 4)

• Problem No. E (The Product Mystery) ! 

• Problem Link : ⤵︎
https://www.codechef.com/problems/PRODUCT?tab=statement

Observation & Intuition : 🕵🏻‍♂️

   •  As we have to told to find minimum possible value of 📉 A, so we derived a equation like : (C * X) / B;  
   
   •   Here, C * X is Indirectly means the LCM of C and B,  where this multiples of C * X is smallest possible value.

                       🤔

•  Now, If we think it in defferent way like : C  / (B/X);  Here, since the x is minimum possible value and this B's Divisor will be max value which is also divide the Value C as well.

• So, as this divisor is greatest value of these both B and C so it is the indirect idea of GCD ! 

Solution Approach : 🎯

   •  If we solve this Using LCM then here we'll calculate the lcm first and then we'll divide this lcm by value B;
   
   •  Otherwise we'll divide the Value C with GCD of B and C. 

Time Complexity :  O(1) 📝

Implementation Uses : Adhoc, GCD, LCM </> 👨🏻‍💻  !

*/


C++ code : 👇

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
ll b, c;

void solve(){
    in b >> c;
    
    out(c/__gcd(b, c) );
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}


Another Approach is : 👇

ll T;
ll b, c;
ll Lcm;

void solve(){
    in b >> c;
    
    Lcm = (b / __gcd(b, c) ) * c;
    
    out(Lcm/b);
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

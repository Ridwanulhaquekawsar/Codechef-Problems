/*

Wednesday , 28 January , 2026 !

☑ 3rd problem of the day done ! ╰┈➤ (Codechef Starters 223, Div 4)

• Problem No. C (School Trip) ! 

• Problem Link : ⤵︎
https://www.codechef.com/problems/SCHOOLTRIP?tab=statement

Observation : 🕵🏻‍♂️

-  Here, Three value are given where n(total student), x(Some Students want to go on trip), k(bus sit capacity) !  N, X, K. 

-  We'll bring some Buses and try to fill all buses so that none of the single student remain after filling all buses ! 

Solution Approach : 🎯

-  We'll Calculate the remaining restudents who have not getten any seats,  so here we'll calculate that how many else student i need to bring another bus who still not think to go on trip,  so i have to manage those students, If enough students not stay among total n students then we'll simply manage those remaining students so that they don't go on the trip or we have to manage those needed students to bring another bus ! 

-  Remaining Students = x % k(total bus seats) ! .
- Required some more students = k - remaining Students ! 

Time Complexity :  O(1) 📝

Implementation Uses :  Adhoc  </> 👨🏻‍💻  !

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
ll n, x, k;
ll rem;
ll need_to_fill_another_bus;

void solve(){
    in n >> x >> k;
    
    if(x % k == 0){
        out(0);
        return;
    } 
       
    /*
    else if(k > x){
        if(k > n){
            out(x);
            return;
        }
        
        out(min(k - x, x) );
        return;
    }
    */
    
    /*
    if(x + (k - (x % k) ) <= n) out(min( (x % k), (k - (x % k) ) ) );
    else out(x % k);
    */
    
    rem = (x % k);
    need_to_fill_another_bus = k - rem;
    
    if(x + need_to_fill_another_bus <= n){
    
        out(min(rem, need_to_fill_another_bus) );
        
    }
    else out(rem);    
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

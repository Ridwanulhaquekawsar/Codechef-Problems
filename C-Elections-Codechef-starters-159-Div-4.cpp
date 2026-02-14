/*

Saturday , 14 February , 2026 !

☑ 1st problem of the day done ! ╰┈➤ (Codechef Starters 169, Div 4)


• Problem No. C (Elections) ! 


• Problem Link : ⤵︎
https://www.codechef.com/problems/USELEC?tab=statement


Observation & Intuition : 🕵🏻‍♂️

   •  Since we've to make candidate A win and we've some extra votes that we can cast/use ! 
   
   •  We'll use this votes in which states A requires less votes to win or fewer vote needed to win and gradually use the votes where more votes are required. 

  • We'll keep giving the votes as long as we have votes available ! 



Solution Approach : 🎯

   •   At first, We'll count in how many states the Candidate A wins.
   
   •  And then, we'll try to make candindate A win by using this Extra votes casting ! 

  • And then we'll check whether Candidate A gets wins or not in more than half of the total states ! 



Time Complexity :  O(n) 📝


Implementation Uses :  Adhoc </> 👨🏻‍💻  !


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

#define Mx_ele(x) *max_element(all(x) )
#define Mn_ele(x) *min_element(all(x) )
#define Sum(x) accumulate(all(x), 0LL)
#define Cnt(x,val) count(all(x), val)

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"

#define fi first
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
#define empt empty()
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
#define f(n) for (ll i = 0; i < (n); i++)

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
ll n, cnt;
vll a, b;
vll ans;
ll x;

void solve(){
    in n >> x;
    rs(a, n);
    rs(b, n);
    ans.clr;
    
    f(n) in a[i];
    f(n) in b[i];
    
    cnt = 0;
    
    f(n){
        if(a[i] > b[i]) cnt++;
        else ans.pb(b[i] - a[i] + 1);
    }
    
    sort(all(ans) );
    
    f(sz(ans) - 1){
        if(x - ans[i] >= 0){
            x -= ans[i];
            cnt++;
        }
        else break;
    }
    
    (cnt >= n/2 + 1) ? YES : NO;
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

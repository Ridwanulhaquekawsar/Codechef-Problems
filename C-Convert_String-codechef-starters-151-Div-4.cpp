/*

Thursday , 19 February , 2026 !

☑ 2nd problem of the day done ! ╰┈➤ (Codechef Starters 151, Div 4)


• Problem No. C (Convert String) ! 


• Problem Link : ⤵︎

https://www.codechef.com/problems/SAMESTR?tab=statement


Observation & Intuition : 🕵🏻‍♂️

   •  In this Problem statement it says that to make all the string elements equal we can choose k elements and in total we have to do k operation on this k elements and it is interestingly says that we can perform this operation arbitrarily on these k elements as we want in total k times.
   
   •  So, to do that if somehow can know whether there is length which is less or equal than our selected k and if there identity of parity is same then we can definitely make this string elelements equal using this k operation ! 



Solution Approach : 🎯

   •  At first we'll calculate the smallest odd and smallest even length where all elements are same ! 
   
   •  And then we'll run a loop from k = n to k = 1, then we'll check wherther there is any subsequential length in this string which all elements are same or not and also its length is less or equal to this k or not , If so then we'll count it as a valid k ! 

   • After the loop end we'll print the Answer Variable ! 



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

#define mx_ele(x) *max_element(all(x) )
#define mn_ele(x) *min_element(all(x) )
#define Sum(x) accumulate(all(x), 0LL)
#define Cnt(x,val) count(all(x), val)

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"

#define fi first
#define se second
#define fr front()
#define bc back()
#define bg begin()
#define rbg rbegin()
#define lb lower_bound
#define ub upper_bound
#define ed end()
#define pu push
#define po pop()
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
#define sz(x) (ll)x.size()
#define bp __builtin_popcount
#define ins insert

using pii = pair<int, int>;
using pdd = pair<double, double>;
using pbb = pair<bool, bool>;
using pcc = pair<char, char>;
using pss = pair<string, string>;
using vi = vector<int>;
using vd = vector<double>;
using vb = vector<bool>;
using vc = vector<char>;
using vs = vector<string>;
using vpii = vector< pair<int, int> >;
using vpdd = vector< pair<double, double> >;
using vpbb = vector< pair<bool, bool> >;
using vpcc = vector< pair<char, char> >;
using vpss = vector< pair<string, string> >;
using vvi = vector< vector<int> >;
using vvd = vector< vector<double> >;
using vvb = vector< vector<bool> >;
using vvc = vector< vector<char> >;
using vvs = vector< vector<string> >;
using vvpll = vector< vector< pair<ll, ll> > >;
using vvpdd = vector< vector< pair<double, double> > >;
using vvpbb = vector< vector< pair<bool, bool> > >;
using vvpcc = vector< vector< pair<char, char> > >;
using vvpss = vector< vector< pair<string, string> > >;

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
#define f1(a, b) for(ll i = a; i <= b; i++)
#define rf(n) for(ll i = n - 1; i >= 0; i--)
#define rf1(a, b) for(ll i = a; i >= b; i--)

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
S s;
ll c1;
ll odd, even;
ll ans;

void solve(){
    in n >> s;
    
    c1 = Cnt(s, s[0]);
    
    if(c1 == n){
        out((n + 1)/2);
        return;
    }
    
    odd = pinf;
    even = pinf;
    
    (c1 & 1) ? odd = c1 : even = c1;
    c1 = n - c1;
    (c1 & 1) ? odd = min(odd, c1) : even = min(even, c1);
    
    ans = 0;
    n++;
    
    wh(n-- && n){
        if(n & 1) {if(odd <= n) ans++;}
        else {if(even <= n) ans++;}
    }
    
    out(ans);
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

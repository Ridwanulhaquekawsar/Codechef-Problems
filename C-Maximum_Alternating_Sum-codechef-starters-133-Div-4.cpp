/*

Wednesday , 4 March , 2026 !

☑ 2nd problem of the day done ! ╰┈➤ (Codechef Starters 133, Div 4)


• Problem No. C (Maximum Alternating Sum) ! 


• Problem Link : ⤵︎
https://www.codechef.com/problems/MXALT?tab=statement


Observation & Intuition : 🕵🏻‍♂️ 🧠

   •  In this problem, we're given an array and it says that every even index will be negative, that means all elements at even indices will be negative. It is also allowed to rearrange the array elements however we want. So, if we keep small elements at all even index then the total sum will give the maximum possible Alternating Sum ! 
   



Solution Approach : 🎯

   • We can approach it in two different ways.
   1st is just sorting the whole array and then calculating the whole array elements sum that means the sum of all elements of that array, And then we'll calculate the left half sum of that array. After that we'll subtract this left half sum from the total sum twice.
   
   • And the Second Approach is like again sorting the whole array and then we'll run a loop and keep adding through the loop of odd index array value to our answer variable and then we'll keep subtracting the even index array element from our answer variable.



Time Complexity :  O(n) 📝


Implementation Uses : Adhoc </> 👨🏻‍💻  !


*/

C++ Code : 👇

#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

#define out(x) cout << (x) << nl
#define in cin >>
#define Nl cout << nl

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
#define bp(x) __builtin_popcount(x)
#define lg(x) __lg(x)
#define ins insert
#define er erase
#define fd(x) find(x)
#define fd1(x, val) find(all(x), val)

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
#define ST stack<ll>
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
vll v;
ll sum;

void solve(){
    in n;
    rs(v, n);
    
    f(n) in v[i];
    sort(all(v) );
    
    sum = 0;
    f(n) (i >= n/2) ? sum += v[i] : sum -= v[i];
    
    out(sum);
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}


Another Way : 👇

ll T;
ll n;
vll v;
ll sum;

void solve(){
    in n;
    rs(v, n);
   
    sum = 0;
    
    f(n){
        in v[i];
        sum += v[i];
    }
    
    sort(all(v) );
    
    out(sum - 2 * Sum1(v, 0, n/2) );
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

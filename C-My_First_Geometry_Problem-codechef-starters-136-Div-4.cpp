/*

Monday , 2 March , 2026 !

☑ 1st problem of the day done ! ╰┈➤ (Codechef Starters 136, Div 4)


• Problem No. C (My First Geometry Problem) ! 


• Problem Link : ⤵︎
https://www.codechef.com/problems/FIRSTGEO?tab=statement


Observation & Intuition : 🕵🏻‍♂️ 🧠

   •  In this problem, We're given a string and its first index will tell us whether we can move to the right or not  and the second index determines whether moving to the left is allowed. And then 3rd index will tell us whether we can move upward or not. And finally 4'th index determines whether moving downward is allowed ! 
   
   •  Here, in this string if we find 3 '1's character then we can say it will occupy half of the total cells and if there are 4 '1's then it means that it will occupy whole space !  If two '1's are there and they are from {0 - 1} range and {2 - 3} range, then it will signify that it will cover one fourth of the whole space, Otherwise it simply means it can move only along with the quadratic straight line  ! 



Solution Approach : 🎯

   •  We approached it in two different ways. One is by just counting how many '1's are there and then according to it, we'll decide how many cells it can occupy ! 
   
   •  And second is, how many cells it will occupy along with x axis and also how many cells it will occupy along with the y axis !  And the we'll multiply them here (x * y) y -> will indicate that how many x axis line cells we have to count in total ! 



Time Complexity :  O(1) 📝


Implementation Uses :  Adhoc, Coordination </> 👨🏻‍💻  !


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
S s;
ll cnt;

void solve(){
    in s;
    
    cnt = 0;
    
    f(4) if(s[i] == '1') cnt++;
    
    if(cnt == 1) out(11);
    else if(cnt == 4) out(441);
    else if(cnt == 3) out(231);
    else{
        (s[0] == '1' && s[1] == '1') || (s[2] == '1' && s[3] == '1') ? out(21) : out(121);
    } 
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}



Another Way : 👇 


ll T;
S s;
ll x, y;

void solve(){
    in s;
    
    x = 1;
    y = 1;
    
    if(s[0] == '1') x += 10;
    if(s[1] == '1') x += 10;
    
    if(s[2] == '1') y += 10;
    if(s[3] == '1') y += 10;
    
    out(x * y);
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

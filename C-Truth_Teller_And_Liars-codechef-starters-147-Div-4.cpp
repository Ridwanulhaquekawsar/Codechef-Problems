/*

Saturday , 21 February , 2026 !

☑ 3rd problem of the day done ! ╰┈➤ (Codechef Starters 147, Div 4)


• Problem No. C (Truth Teller And Liars) ! 


• Problem Link : ⤵︎

https://www.codechef.com/problems/TRUTHLIE?tab=statement



Observation & Intuition : 🕵🏻‍♂️

   •  Here in this problem we are given x Truth Teller and y Liars people and also says that whether it is possible or not to select minimum number people to ask them to sure the Eternal Happiness path ! 
   
   •  It can be possible to select people to ensure exact eternal hapiness path if truth people number is higher than the liars people !  

   • Why it is possible, Beacuse if we randomly take 2m(liars) people then there m people may say truth and m people may say false,  So i can't take decision because which group are rightly saying the exact path, Now i want one more people because there can't be more liears then m people so here higher group will indicate the truth teller group ! 

   • As there can only be m people then rest of the people group opinion will be the answer.

   • If teller number is higher than truth teller people then it is not possible to take any x where it can be sure the exact right path ! 
   Beacuse Regardless of which number of people we take, all are can be liar !   😆



Solution Approach : 🎯

   •  At first, we'll see which group is bigger ! 
   
   • If truth teller number is larger than liars then answer will be = (2m + 1).

   • Otherwise, Answer will be -1.



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
#define bp __builtin_popcount
#define ins insert
#define er erase

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
#define Ms multiset<ll>
#define Mspll multiset<pll>
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
ll n, m;

void solve(){
    in n >> m;
    (n > m) ? out(2 * m + 1) : out(-1);
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

/*

Tuesday , 27 January , 2026 !

☑ Second problem of the day done ! ╰┈➤ (Codechef Starters 119, Div 4)

• Problem No. D (Another Good String) ! 

• Problem Link : ⤵︎
https://www.codechef.com/problems/ADVITIYA4?tab=statement

Observation : 🕵🏻‍♂️

-  Here We we have calculate the max subarray or max consecutive length of similar characters.  And also After every query we will check that added character is same or not than the previous character ! 

Solution Approach : 🎯

-  So, If we want to calculate this then either we can use map to store every charters corresponding max length which is unnecessary,  To make easier we can use simple loop by tracking its consecutive similar character length ! 

Time Complexity :  O(nlogn / n) 🧠🧮𒅒🤔 📝 ! 

Implementation Uses :  Map / Loop </> 👨🏻‍💻  !

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
ll n, q;
Mp mp;
char c;
ll mx;
S s;
ll tmp;

void solve(){
    in n >> q >> s;
    mp.clr;
    
    while(q--){
        in c;
        s += c;
    }
    
    tmp = 1;
    mx = ninf;
    
    if(n == 1) cout << 1 << " ";
    
    rep1(i, 1, sz(s) - 1){
    
        if(s[i] == s[i - 1]) tmp++;
        else{
            if(mp.count(s[i]) ) mp[s[i - 1] ] = max(mp[s[i - 1] ], tmp);
            else mp[s[i - 1] ] = tmp;
            
            mx = max(mx, mp[s[i - 1] ]);
            tmp = 1;
        }
        
        if(i == sz(s) - 1 && s[i] == s[i - 1]){
        
            if(mp.count(s[i]) ) mp[s[i] ] = max(mp[s[i] ], tmp);
            else mp[s[i] ] = tmp;
            
            mx = max(mx, mp[s[i] ]);
        }
        
        if(i >= n - 1) cout << max(tmp, mx) << " ";
    }
    
    cout << nl;
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

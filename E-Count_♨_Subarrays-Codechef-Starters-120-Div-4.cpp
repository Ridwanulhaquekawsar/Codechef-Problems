/*

Thursday , 29 January , 2026 !

☑ 2nd problem of the day done ! ╰┈➤ (Codechef Starters 120, Div 4)

• Problem No. E (Count Subarrays) ! 

• Problem Link : ⤵︎
https://www.codechef.com/problems/COUNTSUB343?tab=statement

Observation : 🕵🏻‍♂️

-  If we deal with every subarray through iterating a loop and constandly expanding its size and summing up until sum goes beyond > N (Total size) ! 

-  It seems like n² complexicity as we're using nested loop but in real it just talking near order of n O(N) Complexicity just, As we know that in worst testcase all value will be sorted and we expand window it just goes few of near n times loop and for rest of the windows loop just goes 1 times or some times ! 

-  In this Subarray Expanding way it won't get TLE(Time limit exceeded), It will safely pass overall all test cases well. 

Solution Approach : 🎯

- Here, We're talking Just a nested loop and start from every window size and then we are expanding this subarray until it goes beyond the Total size n ! 

Time Complexity :  O( < n²) 📝

Implementation Uses :  Nested Loop, Expanding Technique like Fixed sized Window </> 👨🏻‍💻  !

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
#define l_b lower_bound
#define u_b upper_bpund
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
ll n;
vll v;
vll fri;
ll curr_sum;

void solve(){
    in n;
    rs(v, n);
    as(fri, n + 1, 0);
    
    rep(i, n) in v[i];
    
    rep(i, n){
        curr_sum = 0;
        
        rep1(j, i, n - 1){
            curr_sum += v[j];
            if(curr_sum > n) break;
            
            fri[curr_sum]++;
        }
    }
    
    rep1(i, 1, n) cout << fri[i] << " ";
    cout << nl;
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

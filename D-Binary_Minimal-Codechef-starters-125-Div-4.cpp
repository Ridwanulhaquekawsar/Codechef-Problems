/*

Saturday , 7 February , 2026 !

☑ 1st problem of the day done ! ╰┈➤ (Codechef Starters 125, Div 4)

• Problem No. D (Binary Minimal) ! 

• Problem Link : ⤵︎
https://www.codechef.com/problems/BILM?tab=statement

Observation & Intuition : 🕵🏻‍♂️

   •  In the first place, We can't use the delete operation, while we come across
   The character '1' because if there's not present less '1' character numbers than the k operation then '0' position will be replaced by higher character '1' after 1 shifting if we do the delete operation which is worse because it will make the string lexicographically larger. 
   
   •  Here we'll do the second operation only if when k is larger than the number of '1's Character. Otherwise we'll reduce the larger position by flipping it.

Solution Approach : 🎯

   •  At first we'll run a loop and we'll flip every '1' position by '0' and then after the loop end we'll check whether k is larger or equal than the number of '1's character, if so then we'll subtract kth number of character and we'll print (n - k) number of '0's character, otherwise we'll print the modified lexicographically smallest string which made ! 

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
ll n, k;
S s;
ll One_left;
ll k2;

void solve(){
    in n >> k >> s;
    
    if(k == 0){
        out(s);
        return;
    }
    
    k2 = k;
    One_left = 0;
    
    rep(i, n){
        if(s[i] == '1'){
            if(k > 0) {
                s[i] = '0';
                k--;
            }    
            else One_left++;
        }
    }
    
    (One_left) ? out(s) : out(string(n - k2, '0') );
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

/*

Wednesday , 11 February , 2026 !

☑ 2nd problem of the day done ! ╰┈➤ (Codechef Starters 225, Div 4)


• Problem No. D (Plus Minus Split) ! 


• Problem Link : ⤵︎
https://www.codechef.com/problems/PSAS?tab=statement


Observation & Intuition : 🕵🏻‍♂️

   •  As we have make the all elements equal by the subtract and add operation then we've check first whether this array contain more than 2 distinct elements if so then it is not possible to make equal all the array elements ! 
   
   •  And then we've to check whether in this array 2 consecutive groups are present or not, and this group elements should be identical, And then it is possible to make all the elements of array elements equal otherwise not ! 



Solution Approach : 🎯

   •  Initially, we'll check how many distinct elements are present in this array ! 
   
   •  And then we'll try to find two consecutive groups of identical elements ! 

   •  If we found more than two index where they are matched then we can simply print No, Cause in that situation it's not possible to make equal all the array elements by using only these two operation ! 



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
St st;
ll n;
vll v;
bool neg;
bool ok;
ll tmp;

void solve(){
    in n;
    rs(v, n);
    st.clr;
    
    neg = 0;
    
    rep(i, n){
        in v[i];
        st.insert(v[i]);
        
        if(v[i] < 0) neg = 1;
    }
    
    if(neg == 0) (sz(st) == 1) ? Yes : No;
    else{
        if(v[0] >= 0){
            rep(i, n - 1){
                if(v[i] != v[i + 1] && v[i + 1] != -v[i]){
                    No;
                    return;
                }
                else if(v[i] != v[i + 1] && v[i + 1] == -v[i]){
                    tmp = i + 1;
                    break;
                }
            }
            
            rep1(i, tmp, n - 2){
                if(v[i] != v[i + 1]){
                    No;
                    return;
                }
            }
            
            Yes;
        }
        else{
            rep(i, n - 1){
                if(v[i] != v[i + 1] && v[i + 1] != -v[i]){
                    No;
                    return;
                }
                else if(v[i] != v[i + 1] && v[i + 1] == -v[i]){
                    tmp = i + 1;
                    break;
                }
            }
            
            rep1(i, tmp, n - 2){
                if(v[i] != v[i + 1]){
                    No;
                    return;
                }
            }
            
            Yes;
        }
    }
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}



Another Approach : 👇

ll T;
St st;
ll n;
vll v;
ll tmp;

void solve(){
    in n;
    rs(v, n);
    st.clr;
    
    rep(i, n){
        in v[i];
        st.insert(v[i]);
    }
    
    if(sz(st) > 2){
        No;
        return;
    }
    
    if(sz(st) == 1) Yes;
    else{
        rep(i, n - 1){
            if(v[i] != v[i + 1] && v[i + 1] != -v[i]){
                No;
                return;
            }
            else if(v[i] != v[i + 1] && v[i + 1] == -v[i]){
                tmp = i + 1;
                break;
            }
        }
            
        rep1(i, tmp, n - 2){
            if(v[i] != v[i + 1]){
                No;
                return;
            }
        }
            
        Yes;
    } 
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}



Shorter Version  : 👇


ll T;
St st;
ll n;
vll v;
ll tmp;
ll cnt;

void solve(){
    in n;
    rs(v, n);
    st.clr;
    
    rep(i, n){
        in v[i];
        st.insert(v[i]);
    }
    
    if(sz(st) > 2){
        No;
        return;
    }
    
    if(sz(st) == 1) Yes;
    else{
        cnt = 0;
        
        rep(i, n - 1){
            if(v[i] != v[i + 1] && v[i + 1] != -v[i]){
                No;
                return;
            }
            else if(v[i] != v[i + 1]) cnt++;
        }
            
        (cnt > 1) ? No : Yes;
    } 
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

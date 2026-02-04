/*

Wednesday , 4 February, 2026 !

☑ 3rd problem of the day done ! ╰┈➤ (Codechef Starters 124, Div 4)

• Problem No. D (Accommodation) ! 

• Problem Link : ⤵︎
https://www.codechef.com/problems/ACMDT?tab=statement

Observation & Intuition : 🕵🏻‍♂️

   • At first we'll find at most how many rooms we can fill by at least boys & girls numbers and then we'll find for each room how many seats are already empty and then the total empty seats.
   
   • After that we'll check whether rest of the persons who has no seat yet greater or not than total empty seats.

  • if so then we'll give them seats as they want. And then we'll try to clear the rooms and of these rooms people we will give seats if available and then out total rooms number will be shrink ! 

 • As much as we can reduce the room allocate numbers we'll so, then that will be the final answer, What's the question asking us to do ! 

Solution Approach : 🎯

   •  Initially, We'll Calculate the maximum number of rooms we can Allocate ! 
   
   • And then we'll check whether total_empty_rooms are greater or equal then rest_of_the_persons  who has't find any seat yet ! 

 • Then we'll decrement the rest_of_the_persons from total_empty_seats ! 

• Finally, We'll try to clear up the rooms as much as we can and then these people will get the rest of the empty seats ! 

Time Complexity :  O(1) 📝

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
ll b, g, x, y, n;
ll ans;
ll mn;
ll l, r;

void solve(){
    in b >> g >> x >> y >> n;
    
    if(x + y > n){
        out(-1);
        return;
    }
    
    mn = min(b/x, g/y);
    ans = mn;
    
    l = mn * (n - (x + y) );
    r = (g + b) - (mn * (x + y) );
    
    if(l >= r){
        l -= r;
        
        ans -= (l/n);
        
        out(ans);
    }
    else out(-1);
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}


A little bit clearer Verson : 👇


ll T;
ll b, g, x, y, n;
ll ans;
ll l, r;
ll mx_seats, tot_empty_seats;
ll rest_of_the_persons;

void solve(){
    in b >> g >> x >> y >> n;
    
    if(x + y > n){
        out(-1);
        return;
    }
    
    mx_seats = min(b/x, g/y);
    ans = mx_seats;
    
    tot_empty_seats = mx_seats * (n - (x + y) );
    rest_of_the_persons = (g + b) - (mx_seats * (x + y) );
    
    if(tot_empty_seats >= rest_of_the_persons){
        tot_empty_seats -= rest_of_the_persons;
        
        ans -= (tot_empty_seats/n);
        
        out(ans);
    }
    else out(-1);
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

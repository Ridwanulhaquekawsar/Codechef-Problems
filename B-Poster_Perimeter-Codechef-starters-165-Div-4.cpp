/*

Tuesday , 10 February , 2026 !

☑ 1st problem of the day done ! ╰┈➤ (Codechef Starters 165, Div 4)

• Problem No. B (Poster Perimeter) ! 

• Problem Link : ⤵︎
https://www.codechef.com/problems/POSTPERI?tab=statement

Observation & Intuition : 🕵🏻‍♂️

   •  As we've to minimize the difference between a rectagular permeter & the targated value. And also we are given here length's and width's allowed range, So at first we will see whether the maximum perimeter can touch the targated value or not, If so then we we will check whether this targated value k is even or not. It means whether this value is divisible by 2 or not, If it's a even number then we can print 0 otherwise 1;
   
   •  But here a edge case we have to condiser like if the targated value is less or equal than the number 4 then it is not possible to make any perimeter which is less than 4,  That means we can't go down the targated value and also we can't make less perimeter than 4,  So, here answer will be simply = (4 - k) ! 

Solution Approach : 🎯

   •  At first, We'll check whether the k is less or equal to the value 4 or not.
   
   •  And after that we will calculate the maximum perimeter and then we'll see whether it's less or not than value k.

   •  And Lastly, we'll check whether this targated value is Even or not ! 

Time Complexity :  O(1) 📝

     •  Here, We have avoided the nested loop and we optimised it in order of O(1) Operation ! 
     

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
ll l, w, k;
ll peri;

void solve(){
    in l >> w >> k;
    
    if(k <= 4) out(4 - k);
    else{
        peri = 2 * (l + w);
        
        if(peri < k) out(k - peri);
        else (k & 1) ? out(1) : out(0);
    }
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

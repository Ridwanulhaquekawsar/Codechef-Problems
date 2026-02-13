/*

Saturday , 14 February , 2026 !

☑ 1st problem of the day done ! ╰┈➤ (Codechef Starters 160, Div 4)


• Problem No. C (Equate S and T) ! 


• Problem Link : ⤵︎
https://www.codechef.com/problems/EQUATEST?tab=statement


Observation & Intuition : 🕵🏻‍♂️

   •  Since we're allowed here to make any occurence of 'a' character into 'ab' and also as many as times we want ! 
   
   •  We'll continously convert 'a' character into 'ab' where the i'th characters are not same that means we will try to make equal character 'a' with character 'b'.  



Solution Approach : 🎯

   •  At first, we'll run a backward loop and we'll take two pointer to check whether it's possible to make them equal by converting some occurence of character 'a' into 'ab' so that they become equal . 
   
   • In which index both of the character's are same we'll decrement both pointers. 

   • But if they are not same then we'll decrement the 'b' s characters pointer behind and opposite characters's pointer will remain in the same position becasue as it's already converted into 'ab' and this pointer already pointing to character 'a' that is indirectly means that it is already in decremented state and one steps back from its current position that what we need, and that's why further decrement is not needed here anymore ! 



Time Complexity :  O(n) 📝


Implementation Uses :  Two pointers </> 👨🏻‍💻  !


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

#define Mx_ele(x) *max_element(all(x) )
#define Mn_ele(x) *min_element(all(x) )
#define Sum(x) accumulate(all(x), 0LL)
#define Cnt(x,val) count(all(x), val)

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
#define empt empty()
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
ll n, m;
S s, t;
ll i, j;

void solve(){
    in n >> m >> s >> t;
    
    i = n - 1;
    j = m - 1;
    
    wh(i > -1 && j > -1){
        if(s[i] == t[j]) i--, j--;
        else if(s[i] == 'a') j--;
        else i--;
    }
    
    (i == j) ? Yes : No;
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

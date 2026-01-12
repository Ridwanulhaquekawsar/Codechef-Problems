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
#define pb push_back
#define ppb pop_back
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
set<char>st1, st2, st3;
ll all1, all0;
ll s1_1, s2_1, s3_1;
ll s1_0, s2_0, s3_0;
S s1, s2, s3;
ll n;

void solve(){
    in n >> s1 >> s2 >> s3;
    st1.clear();
    st2.clear();
    st3.clear();
    
    all0 = 0;
    all1 = 0;
    
    s1_1 = 0;
    s2_1 = 0;
    s3_1 = 0;
    
    s1_0 = 0;
    s2_0 = 0;
    s3_0 = 0;
    
    rep(i, n){
        st1.insert(s1[i]);
        st2.insert(s2[i]);
        st3.insert(s3[i]);
        
        if(s1[i] == '0'){
            all0++;
            s1_0++;
        }    
        else{
            all1++;
            s1_1++;
        }
        
        
        if(s2[i] == '0'){
            all0++;
            s2_0++;
        }
        else{
            all1++;
            s2_1++;
        } 
        
           
        if(s3[i] == '0'){
            all0++;
            s3_0++;
        }    
        else{
            all1++;
            s3_1++;
        }   
    }
    
    if( (all0 != 0 && all0 != n  &&  all0 != 2*n  &&  all0 != 3*n) || (all1 != 0 && all1 != n && all1 != 2*n && all1 != 3*n) ){
        out(-1);
        return;
    }
    
    if(sz(st1) == 1  &&  sz(st2) == 1  &&  sz(st3) == 1){
        out(0);
        return;
    }
    
    if(all0 > all1) out(n - max({s1_1, s2_1, s3_1}) );
    else out(n - max({s1_0, s2_0, s3_0}) );
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}



Another Approach : 👇

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
#define pb push_back
#define ppb pop_back
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
S a, b, c;
ll a1, b1, c1;
ll a0, b0, c0;
ll all0, all1;

void solve(){
    in n >> a >> b >> c;
    
    a0 = count(all(a), '0');
    a1 = n - a0;
    
    b0 = count(all(b), '0');
    b1 = n - b0;
    
    c0 = count(all(c), '0');
    c1 = n - c0;
    
    all0 = a0 + b0 + c0;
    all1 = a1 + b1 + c1;
    
    if(all0 % n != 0 || all1 % n != 0){
        out(-1);
        return;
    }
    
    (all0 > all1) ? out(all1 - max({a1, b1, c1}) ) : out(all0 - max({a0, b0, c0}) );
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}





Let's see Another Approach : 👇


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
#define pb push_back
#define ppb pop_back
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
S a, b, c;
vpll cnt;
ll all0, all1;

void solve(){
    in n >> a >> b >> c;
    as(cnt, 3, make_pair(0ll, 0ll) );
    
    rep(i, n){
        (a[i] == '0') ? cnt[0].f++ : cnt[0].sc++;
        (b[i] == '0') ? cnt[1].f++ : cnt[1].sc++;
        (c[i] == '0') ? cnt[2].f++ : cnt[2].sc++;
    }
    
    all0 = cnt[0].f + cnt[1].f + cnt[2].f;
    all1 = cnt[0].sc + cnt[1].sc + cnt[2].sc;
    
    if(all0 % n || all1 % n) out(-1);
    else{
        if(all0 == n){
            out(n - max({cnt[0].f, cnt[1].f, cnt[2].f}) );
        }
        else if(all1 == n){
            out(n - max({cnt[0].sc, cnt[1].sc, cnt[2].sc}) );
        }
        else out(0);
    }
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}

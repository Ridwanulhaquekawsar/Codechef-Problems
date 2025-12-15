#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n;
string s;
ll cnt00, cnt11;

void solve(){
    cin >> n >> s;
    
    cnt11 = 0;
    cnt00 = 0;
    
    for(ll i = 0; i < n - 1; i++){
    
        if(s[i] == '0' && s[i + 1] == '0') cnt00++;
        else if(s[i] == '1' && s[i + 1] == '1') cnt11++;
    }
    
    cout << (cnt11 >= cnt00 ? 0 : (cnt00 - cnt11 + 1)/2) << nl; 
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}


• Slightly Short Version: 👇


#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

#define out(x) cout << (x) << nl
#define in cin >>

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"

#define f first
#define s second
#define pb push_back

#define rs(v, n) (v).resize(n)
#define as(v, sz, val) (v).assign(sz, val)

#define pll pair<ll, ll>
#define vll vector<ll>

#define st set<ll>
#define ml multiset<ll>

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rrep(i, n) for(ll i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for(ll i = a; i <= b; i++)
#define rrep1(i, b, a) for(ll i = b; i >= a; i--)

/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/

ll t;
ll n;
string s;
ll c00, c11;

void solve(){
    in n >> s;
    
    c11 = 0;
    c00 = 0;
    
    rep1(i, 0, n - 2){
        
        if(s[i] == '0' && s[i + 1] == '0') c00++;
        else if(s[i] == '1' && s[i + 1] == '1') c11++;
    }
    
    c11 >= c00 ? out(0) : out( (c00 - c11 + 1)/2 );
}

int main(){
    FastIO(); 
    
    t = 1;
    in t;
    while(t--) solve();
}

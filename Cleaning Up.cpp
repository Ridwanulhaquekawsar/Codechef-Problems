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

#define pll pair<ll, ll>
#define vll vector<ll>

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
ll n, m;
vll chef, assist, job;
ll val;


void solve(){
    in n >> m;
    job.resize(n);
    chef.clear();
    assist.clear();
    
    rep(i, n) job[i] = i + 1;
    
    while(m--){
        in val;
        job.erase(remove(job.begin(), job.end(), val), job.end() );
    }
    
    for(ll i = 0; i < job.size(); i += 2) chef.pb(job[i]);
    for(ll i = 1; i < job.size(); i += 2) assist.pb(job[i]);
    
    if(chef.size()){
        rep(i, chef.size()) cout << chef[i] << " ";
        cout << nl;
    }
    else out(-1);
    
    if(assist.size()){
        rep(i, assist.size()) cout << assist[i] << " ";
        cout << nl;
    }
    else out(-1);
}

int main(){
    FastIO(); 
    
    t = 1;
    in t;
    while(t--) solve();
}

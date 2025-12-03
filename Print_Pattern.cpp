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
ll arr[101][101];
ll x, y;
ll z;
ll n;

void solve(){
    in n;
    
    z = 1;
    
    rep1(i, 1, n){
        x = 1; y = i;
        
        rep(j, i){
            arr[x + j][y - j] = z;
            z++;
        }
    }
    
    x = 2;
    y = n;
    
    rrep1(i, n - 1, 1){
        rep(j, i){
            arr[x + j][y - j] = z;
            z++;
        }
        
        x++;
    }
    
    
    rep1(i, 1, n){
        rep1(j, 1, n) cout << arr[i][j] << " ";
        cout << nl;
    }
}

int main(){
    FastIO(); 
    
    t = 1;
    in t;
    while(t--) solve();
}

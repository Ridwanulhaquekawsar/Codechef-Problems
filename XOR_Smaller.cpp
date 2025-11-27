#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n;
ll And;
ll val;

void solve(){
    cin >> n;
    n--;
    
    cin >> And;
    
    while(n--){
        cin >> val;
        And &= val;
    }
    
    cout << And << nl;
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}

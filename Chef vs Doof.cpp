#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n;
vector<ll>a;
bool flag;

void solve(){
    cin >> n;
    a.resize(n);
    
    flag = true;
    
    for(auto &bx : a){
        cin >> bx;
        
        if(bx % 2 == 0) flag = false;
    }
    
    if(flag) cout << "YES" << nl;
    else cout << "NO" << nl;
}

int main(){
    FastIO(); cin >> t; while(t--) solve();
}

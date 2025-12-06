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

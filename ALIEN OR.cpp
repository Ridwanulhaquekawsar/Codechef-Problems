#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n, k;
string s;
map<ll, ll>mp;
ll cnt, idx;

void checkBit(string &str){
    reverse(str.begin(), str.end());
    
    cnt = 0;
    
    for(ll i = 0; i < str.size(); i++){
        if(str[i] == '1'){
            cnt++;
            idx = i;
        }
    }
    
    if(cnt == 1) mp[idx] = 1;
}

void solve(){
    cin >> n >> k;
    mp.clear();
    
    while(n--){
        cin >> s;
        checkBit(s);
    }
    
    for(ll i = 0; i < k; i++){
        if(mp[i] == 0){
            cout << "NO" << nl;
            return;
        }
    }
    
    cout << "YES" << nl;
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}

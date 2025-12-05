#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n, k;
string s;
ll grp_sz;
ll mn0, mx0;
ll cnt0;

void solve(){
    cin >> n >> k >> s;
    
    mn0 = 0;
    mx0 = 0;
    
    for(ll i = 0; i < k; i++){
    
        grp_sz = (n - i + k - 1)/k;
        
        if(grp_sz % 2){
            mn0 += grp_sz/2;
            mx0 += (grp_sz + 1)/2;
        }
        else mn0 += grp_sz/2, mx0 += grp_sz/2;
    }
    
    cnt0 = 0;
    
    for(auto &c : s) if(c == '0') cnt0++;
    
    cout << ( (cnt0 >= mn0) && (cnt0 <= mx0) ? "Yes" : "No") << nl; 
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}

#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n;
vector<ll>v1, v2;
vector<ll>dp1, dp2, dp3, dp4;
ll v1Sum, v2Sum;
ll mx;

void solve(){
    cin >> n;
    v1.resize(n);
    v2.resize(n);
    
    dp1.resize(n);
    dp2.resize(n);
    dp3.resize(n);
    dp4.resize(n);
    
    
    for(auto &bx : v1) cin >> bx;
    for(auto &bx : v2) cin >> bx;
    
    // start with v1
    
    dp1[0] = v1[0];
    
    for(ll i = 1; i < n; i++){
        // maximum subarray sum from start ! 
        dp1[i] = max(dp1[i - 1] + v1[i], v1[i]);
    }
    
    dp2[n - 1] = v1[n - 1];
    
    for(ll i = n - 2; i >= 0; i--){
        // maximum subarray sum from end ! 
        dp2[i] = max(dp2[i + 1] + v1[i], v1[i]);
    }
    
    // now op for v2 
    
    dp3[0] = v2[0];
    
    for(ll i = 1; i < n; i++){
        // maximum subarray sum from start ! 
        dp3[i] = max(dp3[i - 1] + v2[i], v2[i]);
    }
    
    dp4[n - 1] = v2[n - 1];
    
    for(ll i = n - 2; i >= 0; i--){
        // maximum subarray sum from end ! 
        dp4[i] = max(dp4[i + 1] + v2[i], v2[i]);
    }
    
    
    // now we'll calculate the intersecting max sum ! 
   
    mx = LLONG_MIN;
    
    for(ll i = 0; i < n; i++){
        // maximum subarray sum combine from left and right for v1 ! 
        v1Sum = dp1[i] + dp2[i] - v1[i];
        v2Sum = dp3[i] + dp4[i] - v2[i];
        
        mx = max(mx, v1Sum + v2Sum);
    }
    
    cout << mx << nl;
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}

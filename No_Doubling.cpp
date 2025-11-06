#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0);
using ll = long long int;
#define nl '\n'

ll t,n;
vector<ll>a;

void solve(){
    cin>>n;
    a.resize(n);
    
    for(auto &v : a) cin>>v;
    
    sort(a.begin(),a.end(),greater<ll>());
    if(a[0]==a[1]) swap(a[0],a[n-1]);
    
    for(auto &x : a) cout<<x<<" ";
    cout<<nl;
}

int main(){
    FastIO(); cin>>t; while(t--) solve();
}

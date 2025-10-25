#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int t,n,j; vector<ll>arr,dp;
ll opt1,opt2;

void solve(){
    cin>>n;
    arr.resize(n),dp.resize(n);
    
    for(int i=0; i<n; i++) cin>>arr[i];
    
    dp[0]=arr[0]; j=1;
    while(j<n){
        if(j-1>=0){
            opt1=arr[j]+dp[j-1];
            
            opt2=abs(arr[j]-arr[j-1]);
            if(j-2>=0) opt2+=arr[j-2];
            if(j-3>=0) opt2+=dp[j-3];
        }
        
        dp[j]=min(opt1,opt2);
        j++;
    }
    
    cout<<dp[n-1]<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>t; while(t--) solve();
}

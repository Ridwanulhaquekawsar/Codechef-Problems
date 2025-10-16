#include<bits/stdc++.h>
using namespace std;
int t,n,score,k,chef_rank; vector<int>arr;

void solve(){
    cin>>t; int i;
    
    while(t--){
        cin>>n>>score>>k;
        arr.clear(),arr.resize(n);
        
        for(int i=0; i<n; i++) cin>>arr[i];
        sort(arr.begin(),arr.end(),greater<int>());
        
        i=0;
        while(i<n && k>0){
            if(arr[i]>score){
                arr[i]=0;
                score+=100;
                k--;
            }
            
            i++;
        }
        
        
        chef_rank=0;
        for(auto &x : arr) if(x>score) chef_rank++;
        
        cout<<chef_rank+1<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); solve();
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios_base::sync_with_stdio(0),cin.tie(0)
#define ll long long int

ll t,n,c1,c2; string a,b; bool flag;

void solve(){
    cin>>n>>a>>b;
    
    c1=0,c2=0;
    for(int i=0; i<a.size(); i++){
        if(a[i]!=b[i]){
            if((a[i]=='R' && b[i]=='S') || (a[i]=='S' && b[i]=='R')){
                if(a[i]=='R') c1++;
                else c2++;
            }
            else if((a[i]=='S' && b[i]=='P') || (a[i]=='P' && b[i]=='S')){
                if(a[i]=='S') c1++;
                else c2++;
            }
            else{
                if(a[i]=='P') c1++;
                else c2++;
            }
        }
    }
    
    flag=true;
    if(c1>c2){
        cout<<0<<'\n';
        flag=false;
    }
    
    if(flag) cout<<(c1==c2 ? 1 : (c2-c1)/2+1)<<'\n';
}

int main(){
    FastIO(); cin>>t; while(t--) solve();
}

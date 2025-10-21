#include<bits/stdc++.h>
using namespace std;

int t,n,val; set<int>st;

void solve(){
    cin>>t;
    
    while(t--){
        cin>>n;
        st.clear();
        
        while(n--){
            cin>>val;
            st.insert(val);
        }
        
        cout<<st.size()<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve(); return 0;
}

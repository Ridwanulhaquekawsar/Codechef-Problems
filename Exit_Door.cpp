#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll t,n,val,cnt;
pbds<pair<ll, ll>>pb;
set<pair<ll, ll>>st;

void solve(){
    cin>>n;
    
    pb.clear();
    st.clear();
    
    for(int i=0; i<n; i++){
        cin>>val;
        
        pb.insert({i,val});
        st.insert({val,i});
    }
    
    cnt=0;
    pair<ll,ll> tmp_val;
    ll pos;
    
    while(!pb.empty()){
        auto it=prev(st.end());
        
        tmp_val={it->second, it->first};
        st.erase(it);
        
        pos=pb.order_of_key(tmp_val);
        cnt+=min(pos, (ll)pb.size()-1-pos);
        
        pb.erase(tmp_val);
    }
    
    cout<<cnt<<nl;
}

int main(){
    FastIO(); cin>>t; while(t--) solve();
}

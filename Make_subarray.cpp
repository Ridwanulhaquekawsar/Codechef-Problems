#include<bits/stdc++.h>
using namespace std;
int t,n,cnt,tmp_cnt; bool flag; string s;

void solve(){
    cin>>t;
    while(t--){
        cin>>n>>s; flag=false; cnt=0; tmp_cnt=0;
      
        for(auto c : s){
            if(!flag && c=='1'){flag=true;}
            else if(flag && c=='0'){
                tmp_cnt++;
            }else if(flag && c=='1'){
                cnt=tmp_cnt;
            }
        }
      
      cout<<cnt<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); solve();
    return 0;
}

------------------------------------------

#include<bits/stdc++.h>
using namespace std;
int t,n,l_idx,r_idx,i,cnt; string s;

void solve(){
    cin>>t;
    while(t--){
        cin>>n>>s; 
        
        l_idx=s.find('1'); r_idx=s.rfind('1'); cnt=0;
        if(l_idx!=-1 && r_idx!=-1 && l_idx!=r_idx){
            i=l_idx+1;
            while(i<r_idx){
                if(s[i]=='0'){cnt++;}
                i++;
            }
        }
        
        cout<<cnt<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); solve();
    return 0;
}

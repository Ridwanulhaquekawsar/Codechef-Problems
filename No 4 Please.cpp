#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n, bx;
vector<ll>cnt;

void solve(){
    cin >> n;
    cnt.assign(4, 0);
    
    while(n--){
        cin >> bx;
        cnt[bx]++;
    }
    
    cout << ( max(0LL, cnt[2] - 1) + min(cnt[1], cnt[3]) ) << nl;
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}

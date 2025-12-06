#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n, k;
string s, a;
ll total;
ll cnt;
ll rmv;

void solve(){
    cin >> n >> k >> s;
    a.clear();
    
    total = (n * k) - 1;
    
    for(auto &c : s) if(c != 'I') a.push_back(c);
    
    cnt = 0;
    
    for(ll i = 0; i < (int)a.size() - 1; i++){
        if(a[i] != a[i + 1]) cnt++;
    }
    
    rmv = k * cnt;
    if(a.front() != a.back()) rmv += (k - 1);
    
    cout << total - rmv << nl;
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}

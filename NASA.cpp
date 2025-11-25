#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'
const ll maxVal = 32768;

ll t, n;
vector<ll>a, frq;
vector<ll>allPalindrome;
ll ans, tmp;
ll palindromeSz;

bool isPalindrome(ll x){
    string s = to_string(x);
    ll sz = s.size();
    
    for(ll i = 0; i < sz/2; i++){
        if(s[i] != s[sz-1-i]) return 0;
    }
    
    return 1;
}

void markPalindrome(){
    for(ll i = 0; i <= maxVal; i++){
        if(isPalindrome(i)) allPalindrome.push_back(i);
    }
}

void solve(){
    cin >> n;
    a.resize(n);
    frq.assign(maxVal + 1, 0);
    
    for(auto &bx : a){
        cin >> bx;
        frq[bx]++;
    }
    
    ans = n;
    palindromeSz = allPalindrome.size();
    
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < palindromeSz; j++){
            tmp = a[i] ^ allPalindrome[j];
            if(frq[tmp]) ans += frq[tmp];
        }
    }
    
    cout << ans/2 << nl;
}

int main(){
    FastIO(); 
    
    markPalindrome();
    
    cin >> t;
    while(t--) solve();
}

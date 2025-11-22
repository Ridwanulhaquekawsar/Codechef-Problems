#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, x;
vector<ll>primes(2);

bool isPrime(ll val){
    if(val < 2) return 0;
    
    for(ll i = 2; i * i <= val; i++) if(val % i == 0) return 0;
    return 1;
}

void solve(){
    cin >> x;
    primes.clear();
    
    while(1){
        if(isPrime(x)) primes.push_back(x);
        
        x++;
        if(primes.size() == 2) break;
    }
    
    cout << primes[0] * primes[1] << nl;
}

int main(){
    FastIO(); 
    
    cin >> t; 
    while(t--) solve();
}

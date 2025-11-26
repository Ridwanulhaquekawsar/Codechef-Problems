#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n;
pair<ll, ll>divisor;
ll x, y;

pair<ll, ll> findDivisor(ll N){
    for(ll i = 1; i * i <= N; i += 2){
        if(N % i == 0){
            if(i * i == N) return {i, i};
            else return {i, N/i};
        }
    }
}

void solve(){
    cin >> n;
    
    divisor = findDivisor(n);
    
    x = divisor.second;
    y = x ^ divisor.first;
    
    cout << x << " " << y << nl;
}

int main(){
    FastIO(); 
    
    cin >> t;
    while(t--) solve();
}

#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, x;
ll largestBit, large_bit_val;

void solve(){
    cin >> x;
    
    largestBit = __lg(x);
    large_bit_val = 1LL << largestBit;
    
    cout << x - large_bit_val << " " << large_bit_val << nl;
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}

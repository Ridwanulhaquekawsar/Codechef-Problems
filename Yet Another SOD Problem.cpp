#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, l, r;
ll n, sum;

bool is_left_divisible(ll N){
    sum = 0;
    
    while(N > 0){
        sum += N % 10;
        N /= 10;
    }
    
    if(sum % 3) return 0;
    else return 1;
}

void solve(){
    cin >> l >> r;
    
    n = r - l + 1;
    
    if(n == 1){
        cout << (is_left_divisible(l) ? 1 : 0) << nl;
    }
    else if(n == 2){
        if(is_left_divisible(l) || is_left_divisible(r)) cout << 1 << nl;
        else cout << 0 << nl;
    }
    else{
        if(n % 3 == 2){
            if(is_left_divisible(r) || is_left_divisible(r - 1)){
                n /= 3;
                n++;
                
                cout << n << nl;
            }
            else{
                cout << n/3 << nl;
            }
        }
        else if(n % 3 == 1){
            n /= 3;
            if(is_left_divisible(r)) n++;
            
            cout << n << nl;
        }
        else{
            cout << n/3 << nl;
        }
    }
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}

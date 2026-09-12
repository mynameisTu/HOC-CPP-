#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin >> n;
    bool ok = 0;
    for (ll i = 2; i * i <= n; i++){
        if (n % i) continue;
        ll e = 0;
        while (n % i == 0) n /= i, e++;
        if (ok) cout << ".";
        cout << i; if (e > 1) cout << "^" << e;
        ok = 1;
    }
    if (n > 1){ if (ok) cout << "."; cout << n; }
}
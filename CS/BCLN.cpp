#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b) {
        while (b) swap(a,b),b=a%b;
        return a;
}
ll lcm( ll a, ll b) {
        return a/gcd(a,b)*b;
}
int main() {
        ll a,b;
        cin>>a>>b;
        cout<< gcd(a,b)<<"\n";
        cout<<lcm(a,b)<<"\n"; 
}
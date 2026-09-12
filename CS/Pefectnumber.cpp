// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// ll sigma(ll n){
//     ll res=1,tmp=n;
//     for(ll i=2;i*i<=tmp;i++){
//         if(tmp%i)continue;
//         ll pk=1;
//         while(tmp%i==0)tmp/=i,pk*=i;
//         res*=(pk*i-1)/(i-1);
//     }
//     if(tmp>1)res*=(tmp+1);
//     return res;
// }
// int main(){
//     ll n;cin>>n;
//     while(n--){ll x;
//         cin>>x;
//         cout<<(sigma(x)>=2*x?"YES":"NO")<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int maxn=1e6+5;
// ll C[maxn];
// void sang(){
//     for(int i=1;i<maxn;i++)
//         for(int j=2*i;j<maxn;j+=i)
//             C[j]+=i;
// }
// int main(){
//     sang();
//         ll x; cin>>x;
//         cout<<(C[x]>=x?"YES":"NO")<<"\n";
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int n=1e6+3;
// int C[n];
// void solve() {
//     fill(C,C+n,1);
//     C[1]=0;
//     for (int i=2;i*i<=n;i++)
//         for (int j=i*i;j<=n;j+=i) {
//             C[j]+=i;
//             if (i*i!=j) C[j]+=j/i;
//         }
// }
// int main() {
//     solve();
//     ll n; cin>>n;
//     cout<<(C[n]>=n?"YES":"NO")<<"\n";
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll a1,b1,a2,b2;
    cin>>a1>>b1>>a2>>b2;
    ll x1=0,x2=0;
    while (a1*x1+b1 != a2*x2+b2) {
        if (a1*x1+b1 < a2*x2+b2) x1++;
    }
    cout<<x1<<" "<<x2<<endl;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     long long s=0,kc=0, ans= LLONG_MIN;
//     for(int i=0;i<n;i++) {
//      long long x;
//         cin>>x;
//         s+=x;
//         ans=max(ans,s-kc );
//         kc=min(kc,s);
//     }
//     if ( ans<0)
//         cout<<"Thua lo"<<ans;
//     else cout<<"Loi nhuan"<<ans;
//
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
const int n=1e5+5;
long long a[n],pre[n];
void prefix() {
    pre[0]=0;
    for (int i=1 ;i<=n;i++)
        pre[i]=pre[i-1]+a[i];

}
int main() {
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
  
}
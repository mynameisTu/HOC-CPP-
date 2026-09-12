// //prefixsum
//  // lý thuyết
// // S[i]=S[i-1] = A[i]
// // Công thức tổng từ i--->j : s[j]-s[j-1]
// // C++
// #incldue<bits/stdc++.h>
// #include <iostream>
// using namespace std;
// int main() {
//    cin>>n;
//     int a[1001];
//     for(int i=0;i<n;i++) cin>>a[i];
// }

//https://thptchuyen.ntucoder.net/Problem/Details/4633
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     long long ans=0,d=LLONG_MIN,x;
//     for (int i=0;i<n;i++) {
//         cin>>x;
//         ans=max((long long)x,ans+x);
//         d=max(d,ans);
//     }
//     cout<<d<<endl;
//     return 0;
// }
// //https://oj.vnoi.info/problem/prefixsum_diff_a
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,q;
//     cin>>n>>q;
//     vector <long long> pf(n+1,0);
//     for (int i=1;i<=n;i++) {
//         long long x;
//         cin>> x;
//         pf[i]=pf[i-1]+x;
//     }
//     while (q--) {
//         int l,r;
//         cin>>l>>r;
//         cout<<pf[r]-pf[l-1]<<endl;
//     }
//     return 0;
// }

//https://oj.vnoi.info/problem/prefixsum_diff_c
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     long long x;
//     cin>>x;
//     long long t=x;
//     long long ans=x;
//     for (int i=2;i<=n;i++) {
//         cin>>x;
//         t=max(x,t+x);
//         ans=max(ans,t);
//     }
//     cout<<ans<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

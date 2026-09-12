// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int C,K,n;
//     cin>>C>>K>>n;
//     int dp[10005];
//     for (int i=1;i<=n;i++) {
//         int V,L;
//         cin>>V>>L;
//         int loinhuan=K*L-V;
//         for (int j=C; j>=V;j--) {
//             if (dp[j]< dp[j-V]+ loinhuan)
//                 dp[j]=dp[j-V]+loinhuan;
//         }
//     }
//     cout<< dp[C];
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int dp[105][1005];
// int main() {
//     int C,K,n;
//     cin>>C>>K>>n;
//     int V[105], L[105];
//     for (int i=1;i<=n;i++) {
//         cin>>V[i]>>L[i];
//     }
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=C;j++) {
//             int loinhuan=K*L[i];
//             if (j>= V[i]) {
//                 dp[i][j]=max(dp[i-1][j], dp[i-1][j-V[i]]+ loinhuan);
//             }else {
//                 dp[i][j]=dp[i-1][j];
//             }
//         }
//     }
//     cout<<dp[n][C]-C;
// }

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,x;
    cin>>n>>x;
    vector<int>c(n);
    for (int i=0;i<n;i++) cin>>[i];
    vector<long long> dp(x+1,0);
    dp[0]=1 ;
    for (int i=0;i<n;i++) {
        for (int j=c[i];j<=x;j++) {
            dp[j]=(dp[j]+ dp[j - c[i]])% 1000006;
        }
    }
    cout<<dp[x];
}
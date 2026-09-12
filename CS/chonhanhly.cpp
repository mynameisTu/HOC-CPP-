#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<int> dp(m+1,0);
    for ( int i=1;i<=n;i++) {
        int w,v;
        cin>>w>>v;
        for ( int j=m;j>=w;j--)
            dp[j]=max(dp[j],dp[j-w]+v);
    }
    cout<<dp[m];
    return 0;
}
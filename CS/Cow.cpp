#include<bits/stdc++.h>
using namespace std;
bool check(int kc,vector<int>&c,int m) {
    int cnt=1,last=c[0];
    for (int i=1;i<c.size();i++) {
        if (c[i]-last>=kc) {
            cnt++;
            last = c[i];
            if (cnt>=m) return true ;
        }
    }
    return cnt>=m;
}

int main() {
    int n,m;
    cin>>n>>m;
    vector<int>c(n);
    for (int i=0;i<n;i++) cin>>c[i];
    sort(c.begin(), c.end());
    int l=1,r=c.back()-c[0],res=1;
    while (l<=r) {
        int mid=(l+r)/2;
        if (check(mid,c,m)) {
            res=mid;
            l=mid+1;
        }else r=mid-1;
    }
    cout<<res;
}
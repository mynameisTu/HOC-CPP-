#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k;
    cin>>n>>k;
    vector<long long> a(n);
    long long r=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>r)r=a[i];
    }
    long long l=1,res=0;
    while(l<=r){
        long long mid=(l+r)/2;
        long long cnt=0;
        for(int i=0;i<n;i++)cnt+=a[i]/mid;
        if(cnt>=k){
            res=mid;
            l=mid+1;
        }else r=mid-1;
    }
    cout<<res;
}
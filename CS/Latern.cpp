#include<bits/stdc++.h>
using namespace std;
bool check(long long t,vector<int>&a,int n){
    long long can=0;
    for(int x:a){
        can+=(x+t-1)/t;
        if(can>n)return false;
    }
    return can<=n;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(m);
    int maxa=0;
    for(int i=0;i<m;i++){
        cin>>a[i];
        maxa=max(maxa,a[i]);
    }
    long long l=1,r=maxa,res=maxa;
    while(l<=r){
        long long mid=(l+r)/2;
        if(check(mid,a,n)){
            res=mid;
            r=mid-1;
        }else l=mid+1;
    }
    cout<<res;
}
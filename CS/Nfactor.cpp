#include<bits/stdc++.h>
using namespace std;
long long dem0(long long m){
    long long s=0;
    while(m){
        m/=5;
        s+=m;
    }
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long T,N;
    cin>>T;
    while(T--){
        cin>>N;
        long long l=1,r=4e18,res=-1;
        while(l<=r){
            long long mid=(l+r)/2;
            if(dem0(mid)>=N){
                res=mid;
                r=mid-1;
            }else l=mid+1;
        }
        if(dem0(res)!=N)cout<<"-1\n";
        else cout<<res<<'\n';
    }
    return 0;
}
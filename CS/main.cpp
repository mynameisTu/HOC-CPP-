
#include<bits/stdc++.h>
using namespace std;
bool check(long long M, vector<long long> a,int N, long long S) {
    long long sum=0;
    for (int i=0;i<N;i++) {
        if (a[i]<=M) sum+= a[i];
        else sum+= M;
    }
    return sum>=S ;
}
int main() {
    int N;
    long long S;
    cin>>N>>S;
    vector<long long> a(N);
    long long sum=0;
    for ( int i = 0; i < N; ++i ) {
        cin>>a[i];
        sum+=a[i];
    }
    if (sum<S) {
        cout<<-1<<endl;
        return 0;
    }
    long long l=1,r=*max_element(a.begin(),a.end());
    long long ans=0;
    while (l<=r) {
        long long mid=(l+r)/2;
        if ( check(mid,a,N,S) ) {
            ans=mid;
            r=mid-1;

        }else {
            l= mid+1;
        }
    }
    cout<<ans<<endl;
}

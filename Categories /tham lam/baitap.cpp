//https://thptchuyen.ntucoder.net/Problem/Details/7022
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int N,K;
//     cin>>N>>K;
//     vector<int> a(N);
//     for(int i=0;i<N;i++) {
//         cin>>a[i];
//     }
//     sort(a.begin(), a.end());
//     long long ans = 0;
//     for (int i=N-1;i>=0;i-=K) {
//         ans +=2LL*(a[i]-1);
//     }
//     cout<<ans<<endl;
//     return 0;
// }
//https://thptchuyen.ntucoder.net/Problem/Details/8685
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     vector<pair<long long,char>> t;
//     for(int i=0;i<n;i++) {
//         long long x;
//         cin>>x;
//         t.push_back({x,'D'});
//     }
//     for (int i=0;i<n;i++) {
//         long long x;
//         cin>>x;
//         t.push_back({x,'T'});
//     }
//     sort(t.begin(), t.end());
//     int ans = 0;
//     for (int i=0;i<2*n-1;) {
//         if (t[i].second != t[i+1].second) {
//             ans++;
//             i+=2;
//         }else {
//             i++;
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
//
// }
// //https://thptchuyen.ntucoder.net/Problem/Details/8543
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     long long n;
//     cin>>n;
//     int k;
//     cin>>k;
//     if (n%2==0 && n>=2LL*k) {
//         cout<<"YES"<<endl;
//         for (int i=0;i<k-1;i++) {
//             cout<<2<<' ';
//         }
//         cout<<n-2LL*(k-1);
//     }
//     else if ( n% 2==k%2 && n>=k) {
//         cout<<"YES"<<endl;
//         for (int i=0;i<k-1;i++) {
//             cout<<1;
//         }
//         cout<<n-(k-1);
//     }
//     else {
//         cout<<"NO"<<endl;
//     }
//     return 0;
//
// }
//https://thptchuyen.ntucoder.net/Problem/Details/7038
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     string s;
//     cin>>s;
//     int n=s.size();
//     vector<long long> a(n+1,0);
//     for (int i=0;i<n;i++) {
//         if (s[i]=='<') {
//             a[i+1]=a[i]+1;
//         }
//     }
//     for (int i=n-1;i>=0;i--) {
//         if ( s[i]=='>') {
//             a[i]= max (a[i],a[i+1]+1 );
//         }
//     }
//     long long ans=0;
//     for (int i=0;i<=n;i++) {
//          ans+=a[i];
//     }
//     cout<<ans<<endl;
//     return 0;
// }
// laubangchuyen
#include<bits/stdc++.h>
using namespace std;
int main() {
    int N,K;
    cin>> N>>K;
    vector<long long>a(N);
    vector<long long>b(N);
    for (int i=0;i<N;i++) {
        cin>> a[i];
    }
    for (int i=0;i<N;i++) {
        cin>> b[i];
    }
    vector<long long>sum(N);
    for (int i=0;i<N;i++) {
        sum[i]=a[i]+b[i];
    }
    sort (sum.begin(), sum.end(), greater<long long>() );
    long long ans=0;
    for (int i=0;i<K;i++) {
         ans+=sum[i];
    }
    cout << fixed << setprecision(1) << ans / 2.0 << endl;
}



// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int d=0;
//     for (long long i=1;i*i <=n;i++) {
//         if (n%i==0) {
//             if (i*i == n) {
//                 d+=1;
//             }else {
//                 d+=2;
//             }
//         }
//     }
//         cout<<d;
//         return 0;
//     }


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s;
//     getline(cin,s);
//     int d=0;
//     for (int i=0;i<s.length();i++) {
//         if (s [i]>='0' && s[i]<='9')
//             d++;
//     }
//     cout<<d;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int prime[1000001];
// void bns() {
//     fill(prime, prime + 1000001, 1);
//     prime[0] = prime[1] = 0;
//     for (int j = 2; j * j <= 1000000; j++) {
//         if (prime[j] == 1) {
//             for (int i = j * j; i <= 1000000; i += j) {
//                 prime[i] = 0;
//             }
//         }
//     }
// }
// int main() {
//     int N,M;
//     cin>>N>>M;
//     vector<long long> sum(N+1,0);
//     for (int i=1;i<=N;i++) {
//         long long x;
//         cin>>x;
//         sum[i]=sum[i-1]+x;
//     }
//     bns();
//     while (M--) {
//         int a,b;
//         cin>>a>>b;
//         long long t=sum[b]-sum[a-1];
//         if (prime[t])
//             cout<<1;
//         else cout<<0;
//     }
//     return 0;
// }


// So dep
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int d=0;
//     for (int i=1; i*i<=n;i++) {
//         if (n%i==0) {
//             d++;
//             if ( i!=n/i) d++;
//         }
//     }
//     if ( n% d==0 ) cout<<"Co";
//     else cout<<"khong";
//     return 0;
// }

// So hoan hao
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//     int n;
//     cin>>n;
//     int t=0;
//     for (int i=0;i*i <=n;i++) {
//         if (n%i==0) {
//             t+=i;
//             if (i != n/ i&&n / i !=n ) t+=n/i;
//         }
//     }
//     cout<<( t==n?1:0);
//     return 0;
// }

//Mua hang
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,k;
//     cin>>n>>k;
//     vector <int> t(n);
//     for (int i=0;i<n;i++) cin>> t[i];
//     int T=0;
//     for (int i=0;i<k-1;i++) T+= t[i];
//     cout << T;
//     return 0;
// }

//Phan thuong
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     long long a,b;
//     cin>>a>>b;
//     long long c=a+b;
//     string s= to_string(c);
//     cout<<c<<endl;
//     cout<<(*max_element(s.begin(),s.end())-'0')<<endl;
//     return 0;
// }


//Hinh vuong
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;cin>>n;
//     vector<int> x(n),y(n);
//     for ( int i = 0; i < n; i++ ) {
//         cin >> x[i] >> y[i];
//     }
//     sort (x.begin(), x.end());
//     sort (y.begin(), y.end());
//     long long lx=x[n-1]-x[0];
//     long long ly=y[n-1]-y[0];
//     long long a=max(lx,ly);
//     cout<<a*a<<endl;
//     return 0;
// }

// chia het cho 3
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
    // vector<int> a(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
    // long long d=0;
    // for (int i=0; i<n; i++) {
    //     for (int j=i+1; j<n; j++) {
    //         if ( ( a[i]+ a[j])%3==0)
    //             d++;
    //     }
    // }
    // cout << d << endl;
//     long long cnt[3]={0,0,0};
//     for (int i=0;i<n;i++) {
//         int x;
//         cin >> x;
//         cnt[x%3]++;
//     }
//     long long d=0;
//     d+=cnt[0]*(cnt[0]-1)/2;
//     d+=cnt[1]*cnt[2];
//     cout<<d;
//     return 0;
// }

// Xoa phan tu
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     long long dp=0,dp1=0,dp2=0;
//     for (int i=0;i<n;i++) {
//         int x;
//         cin >> x;
//         if (x==1 ) {
//             dp=(dp+1) % 1000000007;
//         }else if ( x==2) {
//             dp1=(dp1*2+dp)% 1000000007;
//         }else {
//             dp2=(dp2+dp1)% 1000000007;
//         }
//     }
//     cout << dp2  << endl;
// }

// // Tro choi
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int A,B;
//     cin >> A >> B;
//     cout<<max({2*A-1,2*B-1,A+B});
// }

//Dem so
// #include <bits/stdc++.h>
// using namespace std;
// long long gcd(long long a, long long b){
//     while(b){
//         long long t = a % b;
//         a = b;
//         b = t;
//     }
//     return a;
// }
// long long f(long long N, long long C, long long D, long long lcmCD){
//     if(N <= 0) return 0;
//     long long chiaC  = N / C;
//     long long chiaD  = N / D;
//     long long chiaCD = N / lcmCD;
//     long long chiaCorD = chiaC + chiaD - chiaCD;
//     return N - chiaCorD;
// }
//
// int main() {
//     long long A, B, C, D;
//     cin >> A >> B >> C >> D;
//     long long g = gcd(C, D);
//     long long lcmCD = (C / g) * D;
//     long long ans = f(B, C, D, lcmCD) - f(A - 1, C, D, lcmCD);
//     cout << ans << "\n";
//     return 0;
// }



//Xau doi xung
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     string s;
//     cin>>s;
//     for (int i = 0; i < (int)s.size()/2; i++) {
//         if (s[i]!=s[s.size()-i-1 ]) {
//             cout<<"NO"<<endl;
//         }
//     }
//     cout<<"YES"<<endl;
//          return 0;
// }

//Tong chu so
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int tong=0;
//     while (n>0) {
//         tong+=n%10;
//         n/=10;
//     }
//     cout<<tong<<endl;
//     return 0;
// }

//Cow-Xau
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     string s;
//     cin>>s;
//     int tong=0;
//     for(int i=0;i<s.length();i++) {
//         tong+=s[i]-'0';
//     }
//     cout<<tong<<endl;
//     return 0;
// }
//
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     ll cntC=0;
//     ll cntCO=0;
//     ll cntCOW=0;
//     for ( int i=0;i<n;i++) {
//         if (s[i]=='C') {
//             cntC++;
//         }else if (s[i]=='O') {
//             cntCO+=cntC;
//         }else if (s[i]=='W') {
//             cntCOW+=cntCO;
//         }
//     }
//     cout<<cntCOW<<endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// bool isPalindrome(const string &s){
//     int i = 0, j = (int)s.size() - 1;
//     while(i < j){
//         if(s[i] != s[j]) return false;
//         i++; j--;
//     }
//     return true;
// }
// int main(){
//     int N;
//     long long K;
//     cin >> N >> K;
//     string s;
//     cin >> s;
//     long long remainLen = N - K;
//     for(long long L = 0; L <= K; L++){
//         string sub = s.substr(L, remainLen);
//         if(isPalindrome(sub)){
//             cout << sub << "\n";
//             return 0;
//         }
//     }
//     cout << "No" << "\n";
//     return 0;
// }
//
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     while (n--) {
//         char s[55];
//         cin>>s;
//         int len=strlen(s);
//         int sum=0;
//         while (s[sum]!='@') sum++;
//         cout<< s[0];
//         for (int i=1;i<=sum-2;i++) cout<<'*';
//         cout<<s[sum-1];
//         for (int i=sum;i<len;i++) cout <<s[i];
//         cout<<'\n';
//
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     char s[100];
//     cin>>s;
//     int sum=0;
//     int len=strlen(s);
//     for (int i=0; i<len;i++)
//         sum+=s[i]-'0';
//     cout<<sum;
//     return 0;
//
// }

// #include<bits/stdc++.h>
// using namespace std;
//
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//
//     string a, b;
//     getline(cin, a);
//     getline(cin, b);
//
//     int n = a.size(), m = b.size();
//     if (m == 0 || m > n) return 0;
//
//     vector<int> f(m, 0);
//     for (int i = 1; i < m; i++){
//         int j = f[i-1];
//         while (j > 0 && b[i] != b[j]) j = f[j-1];
//         if (b[i] == b[j]) j++;
//         f[i] = j;
//     }
//
//     vector<int> res;
//     int j = 0;
//     for (int i = 0; i < n; i++){
//         while (j > 0 && a[i] != b[j]) j = f[j-1];
//         if (a[i] == b[j]) j++;
//         if (j == m){
//             res.push_back(i - m + 2);
//             j = f[j-1];
//         }
//     }
//
//     for (size_t k = 0; k < res.size(); k++)
//         cout << res[k] << (k+1<res.size() ? " " : "\n");
//
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//    int n,k;
//     cin>>n>>k;
//     vector<int> a(n);
//     for(int i=0;i<n;i++){ cin>>a[i]; }
//     sort(a .begin(), a.end(), greater<int>());
//     long long ans=0;
//     for (int i=0;i<n;i+=k)
//         ans+=2LL*abs((a[i]-1));
//     cout<<ans<<endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     vector<string> a(n);
//     for(int i=0;i<n;i++) {
//         cin>>a[i];
//     }
//     sort(a.begin(),a.end());
//     string res="-1";
//     int i=0;
//     while (i<n) {
//         int j=i;
//          while ( j<n&&a[j]==a[i])j++;
//         if ((j-i)%2==1){
//         res=a[i];
//         break;
//         }
//         i=j;
//     }
//     cout<<res;
// }

#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main() {
    int n;
    ll K;
    cin>>n>>K;
    unordered_map<ll,ll> dp;
    ll pref=0;
    ll ans=0;
    dp[0]=1;
    for (int i=1;i<=n;i++) {
        ll x;
        cin>>x;
        pref+=x-K;
        ans+=dp[pref];
        dp[pref]++;
    }
    cout<<ans<<endl;
    return 0;
}
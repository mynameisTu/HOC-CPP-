//prefixsum2d
//cho một ma trận 2d, kích thước h*m.
//Yêu cầu : tính tổng các số nằm trong hình chữ nhật con từ (x1,y1)-->(x2,y2),trong thời gian 0(1)
// 1 2 3 4
// 5 6_7 8
//9 1_3 4
//0 2 8 2
// ô cần tính là 6_7
//               1_3

// công thức thiết lập mảng F:
// F[i][j]=F[i-1][j]+F[i][j-1]-F[i-1][j- i]+A[i][j]
// v
// #include <bits/stdc++.h>
// using namespace std;
//
// int main () {
//     int F[1001][1001];
//     char a[1001][1001];
//     int n,q;
//     cin >> n >> q;
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=n;j++) {
//             cin >> a[i][j];
//         }
//     }
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=n;j++) {
//             F[i][j]=F[i-1][j]+F[i][j-1]-F[i-1][j-1]+(a[i][j]=='*');
//
//         }
//     }
//     while (q--) {
//         int y1,x1,y2,x2;
//         cin >> y1 >> x1 >> y2 >> x2;
//         cout<<F[y2][x2]-F[y1-1][x2]-F[y2][x1-1]+F[y1-1][x1-1]<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n),f(n);
    for(int i=0;i<n;i++) cin>>a[i];
    f[0]=a[0];
    for(int i=1;i<n;i++) f[i]=a[i]-a[i-1];
    for(int i=0;i<n;i++) cout<<f[i]<<" ";
}
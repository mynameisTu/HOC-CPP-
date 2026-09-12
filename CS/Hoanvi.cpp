#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a(101);
vector<int> b(101,0);
bool check(int gt,int k) {
    for (int j=1;j<k;j++) {
        if (b[j]==gt) {
            return false;
        }
    }
    return true;
}
void hoanvi(int k) {
    if (k==n+1) {
        cout<<"[";
        for (int i=1;i<=n;i++) {
            cout<<b[i];
            if (i!=n) cout<<",";
        }
        cout<<"]";
    }
    else {
        for (int i=1;i<=n;i++) {
            if (check(a[i],k)) {
                b[k]=a[i];
                hoanvi(k+1);
            }
        }
    }
}
int main() {
    n=3 ;
    a[1]=4;
    a[2]=2;
    a[3]=7;
    hoanvi(1);
    return 0;
}
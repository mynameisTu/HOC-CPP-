
#include<bits/stdc++.h>
using namespace std;
int n;
char a[100];
char nst[]={'A','C','G','T'};
void backtrack(int i) {
    if (i==n) {
        for (int j=0;j<n;j++)
            cout<<a[j];
        cout<<endl;
    } else {
        for ( int j=0;j<4;j++) {
            a[i]=nst[j];
            backtrack(i+1);
        }
    }
}
int main() {
 cin>>n;
    backtrack(0);
}
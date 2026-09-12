
#include<bits/stdc++.h>
using namespace std;
int n, a[100];
void in(int k){
    for(int i=1;i<k;i++) cout<<a[i]<<"+";
    cout<<a[k]<<endl;
}
void ql(int i,int s,int sum){
    for(int j=s;j<=n-sum;j++){
        a[i]=j;
        sum+=j;
        if(sum==n) in(i);
        else ql(i+1,j,sum);
        sum-=j;
    }
}
int main(){
    cin>>n;
    ql(1,1,0);
    return 0;
}


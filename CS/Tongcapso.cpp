#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int x;
    cin>>x;
    sort(a.begin(),a.end());
    int l=0,r=n-1,res=0;
    while(l<r){
        int s=a[l]+a[r];
        if(s==x){
            res++;
            l++;
            r--;
        }
        else if(s<x)l++;
        else r--;
    }
    cout<<res;
}
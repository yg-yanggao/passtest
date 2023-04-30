#include<bits/stdc++.h>
using namespace std;
int main(){
    int *a=new int [9999]();
    int n;
    while(cin>>a[1]>>a[2]>>n){
        for(int i=3;i<=n;i++){
        a[i]=abs(a[i-1]-a[i-2]);
        }
        cout<<a[n]<<endl;
    }
}

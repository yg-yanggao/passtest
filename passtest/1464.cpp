#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[999],n;
    while(cin>>a[1]>>a[2]>>a[3]) {
        cin>>n;
        for(int i=0; i<n; i++) {
            int a1,a2;
            cin>>a1>>a2;
            if(a[a1]+a[a2]<=20) {
                a[a2]+=a[a1];
                a[a1]=0;
            } else if(a[a1]+a[a2]>20) {
                a[a1]=a[a1]+a[a2]-20;
                a[a2]=20;
            }
        }
        int m=0;
        for(int i=1; i<=3; i++) {
            if(m==0) {
                cout<<a[i];
            } else {
                cout<<" "<<a[i];
            }
            m++;
        }
        cout<<endl;
    }
     
    return 0;
}

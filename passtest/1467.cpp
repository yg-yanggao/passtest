#include<bits/stdc++.h>
using namespace std;
int main() {
    int b[9][9];
    while(cin>>b[1][1]>>b[1][2]>>b[1][3]>>b[1][4]) {
        for(int i=2; i<=4; i++) {
            for(int j=1; j<=4; j++) {
                cin>>b[i][j];
            }
        }
        int u[]={0,1,2,3,4};
        int a[25];
        int o=0;
    do{
    a[o++]=b[1][u[1]]+b[2][u[2]]+b[3][u[3]]+b[4][u[4]];
    }while(next_permutation(u+1,u+5));
    o=0;
    for(int i=0;i<24;i++){
        if(a[i]>o)o=a[i];
        //cout<<a[i]<<endl;
    }
    cout<<o<<endl;
    }
 
}

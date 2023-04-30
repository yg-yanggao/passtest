#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
while(cin>>n){
	int *x=new int[n];
	int *a=new int [n];
	for(int i=0;i<n;i++){
		cin>>x[i]>>a[i];
	} 
	for(int i=0;i<n;i++){
		int m=i;
		for(int k=i+1;k<n;k++){
			if(a[m]>a[k])m=k;
		}
		int temp=a[m];
		a[m]=a[i];
		a[i]=temp;
	}
	int c=0;
	for(int i=0;i<n;i++){
		c+=abs(a[i]-a[n/2]);
	}
		cout<<c<<endl;
}
return 0;
}


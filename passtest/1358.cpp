#include<iostream>
#include<string.h>
using namespace std;
int main() {
int a,b,c;
int *d=new int ;
int j=1;
cin>>a;
	for(int i=0;i<a;i++){
		cin>>d[i];
	}
	for(int i=0;i<a;i++){
		 j=1;
		for(;j<d[i]-1;j++){
			if(!(j%2==0))cout<<j<<" ";
		}
		cout<<d[i]-1<<endl;
		 j=1;
		for(;j<d[i]-1;j++){
			if((j%2==0))cout<<j<<" ";
		}
		cout<<d[i]<<endl;
	}
		return 0;
}



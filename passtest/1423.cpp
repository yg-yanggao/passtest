#include<iostream>
using namespace std;
int main(){
int n;
while(cin>>n){
	int  *a=new int [999]();
	int b=0;
	int c=0;
	do{
	  b=n%2;
	  n/=2;
	  a[c++]=b;
	}while(n!=0);
	for(int i=c-1;i>=0;i--){
		cout<<a[i];
	}
	cout<<endl;
}
return 0;
}


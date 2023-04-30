#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int m,p;
		cin>>m>>p;
	for(int j=0;j<p;j++){
		int t,k;
		cin>>t>>k;
		if(t==1)m+=k;
		if(t==2)m-=k;
		if(t==3)m*=k;
		if(t==4)m/=k;
		if(t==5)m%=k;
	}
	cout<<m<<endl;
	}
	return 0;
}

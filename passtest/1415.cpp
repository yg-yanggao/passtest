#include<iostream>
using namespace std;
int main(){
  int n,m;
  while(cin>>n){
  	int *a=new int [200]();
  	for(int i=0;i<n;i++)cin>>a[i];
  	cin>>m;
  	for(int i=0;i<n;i++){
  		if(a[i]==m){
  		cout<<"YES"<<endl;
		 break; 
	  }
	  if(i==n-1)cout<<"NO"<<endl;
  }
}
return 0;	
}

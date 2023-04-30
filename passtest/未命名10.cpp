#include<iostream>
//第一次通关考 
using namespace std;
int main(){
int n;
while(cin>>n){
	for(int i=0;i<n;i++)cout<<"$";
	cout<<endl;
	int u=n/2;
	for(int i=0;i<n;i++){
		if(i==0||i==n-1)cout<<"$";
		else if(i==u)cout<<"*";
		else cout<<" ";
	}
	cout<<endl;
	for(int i=1;i<u;i++){
		for(int k=0;k<n;k++){
			if(k==0||k==n-1)cout<<"$";
			else if(k==u-i||k==u+i)cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
	for(int i=u-2;i>=1;i--){
		for(int k=0;k<n;k++){
			if(k==0||k==n-1)cout<<"$";
			else if(k==u-i||k==u+i)cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		if(i==0||i==n-1)cout<<"$";
		else if(i==u)cout<<"*";
		else cout<<" ";
	}
	cout<<endl;
		for(int i=0;i<n;i++)cout<<"$";
	cout<<endl;
	
}
return 0;
}


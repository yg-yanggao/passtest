#include<iostream>
using namespace std;
int main(){
int a,b;
while(cin>>a>>b){
	if(a==b&&a==0){
		break;
	}
	else {
		int n=a<b?a:b;
		int u=1;
		for(int i=n;i>0;i--){
			if(a%i==0&&b%i==0){
				u=i;
				break;
		}
	}
		cout<<u+a*b/u<<endl;
}
}
return 0;
}

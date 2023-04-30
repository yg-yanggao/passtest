#include<iostream>
using namespace std;
int main(){
int a,b,c;
while(cin>>a>>b>>c){
	int i=a>b?a:b;
	i=i>c?i:c;
	for(int k=i;i>=0;k--){
		if(a%k==0&&b%k==0&&c%k==0)
		{
			cout<<k<<endl;
			break;
		}
	}
}
return 0;
}


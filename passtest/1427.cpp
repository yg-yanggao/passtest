#include<iostream>
using namespace std;
int main(){
double n,a,m;
while(cin>>n>>a>>m){
	for(int i=0;i<m;i++){
		n=n*(1+0.01*a);
	}
	cout<<int(n+0.5)<<endl;
}
return 0;
}


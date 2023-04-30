#include<iostream>
using namespace std;
int main(){
long long n;
while(cin>>n){
	long long o=0;
	for(int i=0;i<=n;i++){
		o+=i*i;
	}
	cout<<o%100009<<endl;
}


return 0;
}


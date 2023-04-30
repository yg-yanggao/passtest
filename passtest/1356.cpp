#include<iostream>
#include<string.h>
using namespace std;
int main() {
	int a,b,c,d,e;
while(cin>>a>>b){
	c=a%10;
	d=b%10;
	e=c+d;
	e=e%10;
	cout<<e<<endl;
}
	return 0;
}

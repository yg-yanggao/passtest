#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main() {
string a;
while(cin>>a){
	const char*p=a.data();
	if(strlen(p)==1&&p[0]=='0')break;
	int b=a.length();
	int i=0;
	for(;i<b/2;i++){
		if(a[i]==a[b-i-1]);
		else break;
	}
	if(i==b/2)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
		return 0;
}



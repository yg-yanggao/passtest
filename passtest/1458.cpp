#include<iostream>
#include<string.h> 
using namespace std;
int main(){
char *a=new char[30]();
while(cin>>a){
	char b[999]={"Take the "};
	
	strcat(b,a);
	cout<<b<<endl;
}
return 0;
}


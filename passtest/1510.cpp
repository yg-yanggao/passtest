#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n;
char a[999];
while(cin>>n){
	 char a[500][500];
	 for(int i=0;i<n;i++)cin>>a[i];
	 int o=0;
	 for(int i=0;i<n-1;i++){
	 	if(strcmp(a[i],a[i+1])==0){
	 		o=i;
	 		break;
		 }
	 }
	 for(int i=0;i<n;i++){
	 	if(strcmp(a[o],a[i])!=0){
	 		cout<<a[i]<<endl;
	 		break;
}
}
}
return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
int judge(char *a,int n){
	int p=0;
	for(int i=0;i<n/2;i++){
		if(a[i]==a[n-i-1])p++;
	}
	if(p==n/2)return n;
	else return 0;
}
int main(){
char a[999];
while(cin>>a){
	int o=strlen(a);
	if(o==1)cout<<1<<endl;
	else if(o==2){
		if(a[0]==a[1])cout<<2;
		else cout<<1;
	}
	else{
		int p=0;
		for(int i=2;i<=o;i++){
			for(int k=0;k<=o-i;k++){
				if(judge(a+k,i)>p)p=judge(a+k,i);
			}
		}
		cout<<p<<endl;
	}
}
return 0;
}


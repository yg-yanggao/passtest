#include<iostream>
#include<string.h>
int c1(char *b){
	int o=strlen(b);
	char a[999];
	for(int i=0;i<o;i++){
		a[i]=tolower(b[i]); 
	}
	a[o]='\0';
	if(strcmp(a,"zero")==0)return 0;
	if(strcmp(a,"one")==0)return 1;
	if(strcmp(a,"two")==0)return 2;
	if(strcmp(a,"three")==0)return 3;
	if(strcmp(a,"four")==0)return 4;
	if(strcmp(a,"five")==0)return 5;
	if(strcmp(a,"six")==0)return 6;
	if(strcmp(a,"seven")==0)return 7;
	if(strcmp(a,"eight")==0)return 8;
	if(strcmp(a,"nine")==0)return 9;
}
int c2(char *b){
	int o=strlen(b);
	char a[999];
	for(int i=0;i<o;i++){
		a[i]=tolower(b[i]); 
	}
	a[o]='\0';
	if(strcmp(a,"add")==0)return 0;
	else if(strcmp(a,"sub")==0)return 1;
	else if(strcmp(a,"mul")==0)return 2;
	else if (strcmp(a,"div")==0)return 3;
}
using namespace std;
int main(){
	char a[100][100];
	while(cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]){
		int x=c1(a[1]);
		int y=c1(a[3]);
		int z=c1(a[5]);
		int o=c2(a[2]);
		if(o==0){
			if(y+x==z)cout<<"true"<<endl;
			else cout<<"false"<<endl;
		}
		if(o==1){
			if(x-y==z)cout<<"true"<<endl;
			else cout<<"false"<<endl;
		}
		if(o==2){
			if(x*y==z)cout<<"true"<<endl;
			else cout<<"false"<<endl;
		}
		if(o==3){
			if(y==0){
				cout<<"false"<<endl;
			}
			 else {
			 int p=x/y;
			if(p==z)cout<<"true"<<endl;
			else cout<<"false"<<endl;
			}
		}
	}
return 0;
}

#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
int main(){
int i=0,c=0,p=0;
while(cin>>i)
{
int *v=new int[i](); 
for(int k=0;k<i;k++){
	for(int j=0;j<5;j++){
		int o;
		cin>>o;
	v[k]+=o;
	}
	v[k]=v[k]%26;
}
for(int m=0;m<i;m++){
		cout<<char(v[m]+97);
			cout<<endl;
}
}
return 0;
}

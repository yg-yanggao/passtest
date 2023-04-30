#include<iostream>
#include<string.h>
using namespace std;
int main() {
	char a[9999];
	while(cin>>a) {
		int n=0;
		int j=0;
		n=strlen(a);
		for(int i=0; i<n; i++) {
			if(a[i]=='4')j++;
		}
		cout<<j<<endl;
	}	
	return 0;
}


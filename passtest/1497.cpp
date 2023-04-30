#include<iostream>
#include<string.h>
using namespace std;
int main() {
	int t,n;
	while(cin>>t) {
		char a[999];
		int o=0;
		for(int i=0; i<t; i++) {
			int sum=0;
			cin>>n;
			for(int k=0; k<n; k++) {
				cin>>a;
				o=strlen(a);
				for(int j=0; j<o; j++) {
					if(a[j]=='*'||a[j]==':'||a[j]=='%')sum++;
				}
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}


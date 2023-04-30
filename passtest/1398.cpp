#include<iostream>
using namespace std;
int main() {
	int n,m;
	while(cin>>n>>m) {
		int o='a';
		for(int i=0; i<m; i++) {
			for(int k=0; k<n; k++) {
				cout<<char(o);
				if(o=='z')o='a';
				else o++;
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}

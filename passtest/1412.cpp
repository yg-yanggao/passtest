#include<iostream>
using namespace std;
int main() {
	int m,n;
	while(cin>>m>>n) {
		for(int i=0; i<n; i++)cout<<'#';
		cout<<endl;
		for(int i=0; i<m-2; i++) {
			for(int k=0; k<n; k++) {
				if(k==0||k==n-1)cout<<'#';
				else cout<<' ';
			}
			cout<<endl;
		}
		for(int i=0; i<n; i++)cout<<'#';
		cout<<endl;
		cout<<endl;
	}
	return 0;
}


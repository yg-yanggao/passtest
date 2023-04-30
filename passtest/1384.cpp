#include<iostream>
using namespace std;
int main() {
	int n,m;
	int c=2;
	while(cin>>n) {
		for(int i=0; i<n; i++) {
			int m;
			cin>>m;
			int o=0;
			for(int k=1; k<=m; k*=c) {
				if(m==k)o=1;
			}
			if(o==1)cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
	}
	return 0;
}

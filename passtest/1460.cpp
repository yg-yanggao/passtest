#include<iostream>
using namespace std;
int main() {
	int n,x;
	while(cin>>n>>x) {
		int k=0;
		int j=0;
		for(int i=0; i<n; i++) {
			int l;
			cin>>l;
			if(l>x)k++;
			if(l<x)j++;
		}
		cout<<k<<endl<<j<<endl;
		cout<<endl;
	}


	return 0;
}


#include<iostream>
using namespace std;
int main() {
	int i=0,c=0,p=0;
	while(cin>>i) {
		p=i;
		int v[50];
		for(int k=0; k<i; k++) {
			int y=0;
			int t=0;
			int z=0;
			cin>>y>>t;
			z=y;
			if(z<t)z=t;
			for(int j=z; j>0; j--) {
				if((y%j==0)&(t%j==0)) {
					v[k]=j;
					break;
				}
			}

		}
		for(int m=0; m<i; m++) {
			cout<<"Case "<<m+1<<": "<<v[m];
			if(m!=i-1)cout<<endl;
		
		}
	}
		return 0;
}

#include<iostream>
using namespace std;
int main() {
	int n,m;
	while(cin>>n>>m) {
		int *a=new int[n+1]();
		for(int i=0; i<m; i++) {
			int b,c;
			cin>>b>>c;
			a[b]++;
			a[c]++;
		}
		int o=1;
		for(int i=1; i<n+1; i++) {
			if(a[i]%2==0)o++;
		}
		if(o==n+1)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}

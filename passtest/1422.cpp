#include<iostream>
using namespace std;
int main() {
	int n;
	while(cin>>n) {
		double *a=new double[2000]();
		double b=0;
		for(int i=0; i<n; i++) {
			cin>>a[i];
			b+=a[i];
		}
		cout<<int (b/n+0.5);
		cout<<endl;
	}
	return 0;
}


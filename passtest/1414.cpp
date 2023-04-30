#include<iostream>
using namespace std;
int main() {
	int n;
	while(cin>>n) {
		int *a=new int [100]();
		for(int i=0; i<n; i++) {
			cin>>a[i];
		}
		for(int i=0; i<n; i++) {
			int b=i;
			for(int k=i+1; k<n; k++) {
				if(a[b]>a[k])b=k;
			}
			int temp=a[b];
			a[b]=a[i];
			a[i]=temp;
		}
		int m=0;
		for(int i=0; i<n; i++) {
			if(m==0)cout<<a[i];
			else cout<<" "<<a[i];
			m++;
		}
		cout<<endl;
	}
	return 0;
}


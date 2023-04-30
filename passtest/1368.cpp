#include<iostream>
using namespace std;
int main() {
	int *a=new int;
	int b=0;
	int c=0;
	int j=0;
	while(cin>>b) {
		j++;
		for(int i=0; i<b; i++) {
			cin>>a[c++];
		}
		if(j==2) {
			for(int i=0; i<c; i++) {
				int min=i;
				for(int j=i+1; j<c; j++) {
					if(a[j]<a[min])min=j;
				}
				int temp=a[i];
				a[i]=a[min];
				a[min]=temp;
			}
			for(int i=0; i<c; i++) {
				cout<<a[i];
				if(i!=c-1)cout<<" ";
			}
			a=new int;
			c=0;
			j=0;
			cout<<endl<<endl;
		}
	}
	return 0;
}



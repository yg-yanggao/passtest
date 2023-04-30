#include <iostream>
using namespace std;
int main() {
	int n,k;
	while(cin>>n>>k) {
		int *a=new int [n+1]();
		int b;
		for(int i=1; i<k+1; i++) {
			b=i;
			for(int j=i; j<n+1; j+=b) {
				if(a[j]==1)a[j]=0;
				else a[j]=1;
			}
		}
			int m = 0;
		for(int i=1;i<n+1;i++){
			if(a[i]==1){
			if (m== 0)cout <<i;
				else cout << ' ' <<i;
				m++;
		}
		}
		cout<<endl;
		cout<<endl;
	}

	return 0;
}

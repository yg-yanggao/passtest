#include<iostream>
using namespace std;
int main(){
int n=1;
while(cin>>n){
	if(n==0)break;
	else{
		double *a=new double [50]();
		a[0]=1.0;
		for(int i=1;i<=n;i++){
			a[i]=a[i-1]*(4*i-2)/(i+1);
			//cout<<a[i]<<endl;
		}
		printf("%d: %.0f\n",n,a[n]);
	}
}
return 0;
}


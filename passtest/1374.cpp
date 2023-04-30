#include<iostream>
using namespace std;
int main(){
	int i;
	while(cin>>i){
		if(i!=999){
			printf("%.1lf",1.8*i+32);
		}
		else break;
			printf("\n");
	}
	return 0;
}

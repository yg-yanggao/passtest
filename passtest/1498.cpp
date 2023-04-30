#include<iostream>
using namespace std;
int main(){
int n;
while(cin>>n){
	if(n==0)break;
	else{
		for(int i=0;i<n;i++){
			cout<<"           *"<<endl;
			cout<<"         *   *"<<endl;
			cout<<"   *   *       *   *"<<endl;
			cout<<"     *           *"<<endl;
			cout<<"       *   *   *"<<endl;
			cout<<"      * *     * *"<<endl;
			cout<<"     *           *"<<endl;
		}
	}
}


return 0;
}


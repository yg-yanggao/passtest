#include<iostream>
#include<math.h>
using namespace std;
int main() {
double x1,y1,x2,y2,d1,d2,d3;
while(cin>>x1>>y1>>x2>>y2){
	d1=(x1-x2)*(x1-x2);
	d2=(y1-y2)*(y1-y2);
	d3=pow(d2+d1,0.5);
	printf("%.2lf\n",d3);

}
		return 0;
}



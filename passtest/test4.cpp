#include<iostream>
using namespace std;
int main() {
	int n1;
	cin>>n1;//输入矩阵大小
	double *a=new double[(n1+1)*(n1+1)]();
	for(int i=1; i<=n1; i++) {
		a[i*n1+i]=4;
	}
	for(int i=1; i<=n1; i++) {
		a[i*n1+(i+1)]=1;
		a[(i+1)*n1+i]=1;
	}//生成系数矩阵,因为c++无法new出二维数组，因此选择用一维数组当做二维数组使用
	double *a1=new double [n1+10];
	for(int i=1; i<=n1; i++) {
		cin>>a1[i];
	}//输入常数项
	double *c=new double [n1+10];//c
	double *d=new double [n1+10];//d
	c[1]=a[1*n1+2]/a[1*n1+1];
	d[1]=a1[1]/a[1*n1+1];
	for(int i=2;i<=n1;i++){
		c[i]=a[i*n1+(i+1)]/(a[i*n1+i]-a[(i+1)*n1+i]*c[i-1]);
		d[i]=(a1[i]-a[(i+1)*n1+i]*d[i-1])/(a[i*n1+i]-a[(i+1)*n1+i]*c[i-1]);
	}
	double *x=new double [n1+10]();//得到的解 
	x[5]=d[5];
	for(int i=4; i>0; i--) {
		x[i]=d[i]-c[i]*x[i+1];
	}//求解 
	for(int i=1; i<=n1; i++) {
		cout<<"x"<<i<<": "<<x[i]<<endl;
	}//将结果输出 */
	return 0;
}

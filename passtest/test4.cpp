#include<iostream>
using namespace std;
int main() {
	int n1;
	cin>>n1;//��������С
	double *a=new double[(n1+1)*(n1+1)]();
	for(int i=1; i<=n1; i++) {
		a[i*n1+i]=4;
	}
	for(int i=1; i<=n1; i++) {
		a[i*n1+(i+1)]=1;
		a[(i+1)*n1+i]=1;
	}//����ϵ������,��Ϊc++�޷�new����ά���飬���ѡ����һά���鵱����ά����ʹ��
	double *a1=new double [n1+10];
	for(int i=1; i<=n1; i++) {
		cin>>a1[i];
	}//���볣����
	double *c=new double [n1+10];//c
	double *d=new double [n1+10];//d
	c[1]=a[1*n1+2]/a[1*n1+1];
	d[1]=a1[1]/a[1*n1+1];
	for(int i=2;i<=n1;i++){
		c[i]=a[i*n1+(i+1)]/(a[i*n1+i]-a[(i+1)*n1+i]*c[i-1]);
		d[i]=(a1[i]-a[(i+1)*n1+i]*d[i-1])/(a[i*n1+i]-a[(i+1)*n1+i]*c[i-1]);
	}
	double *x=new double [n1+10]();//�õ��Ľ� 
	x[5]=d[5];
	for(int i=4; i>0; i--) {
		x[i]=d[i]-c[i]*x[i+1];
	}//��� 
	for(int i=1; i<=n1; i++) {
		cout<<"x"<<i<<": "<<x[i]<<endl;
	}//�������� */
	return 0;
}

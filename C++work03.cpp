#include <iostream>
using namespace std;
//�ж�һ�����Ƿ�������----�����Ķ��� 
//int ss(int m){
//	for(int i=2;i<=m-1;i++)
//	   if(m%i==0)return 0;
//	return 1;
//}
//int main(int argc, char** argv) {
//	int m;
//	cin>>m;
//	if(ss(m))
//	cout<<"��������"<<endl;
//	else
//	cout<<"����������"<<endl;
//	return 0;
//}

//����������
//#include <cmath>
//int gcd(int a,int b);
//int main(){
//	int m,n;
//	cin>>m>>n;
//	cout<<gcd(m,n)<<endl;
//	return 0;
//} 
//int gcd(int a,int b){//ע��������������ʱ��֮��Ҫ�ÿո���� 
//	return b? gcd(b,a%b):a;//˼��һ��ԭ����ŷ������㷨 
//}


//��������----��δѧϰ���˽������֪ʶ
inline int fun(int a,int b)//�����inline�����ʹ���������������� 
	{
		return a*a+b*b;
	}
int main(){
	int m,n;
	cin>>m>>n;
	cout<<fun(m,n)<<endl;//�˴��ĵ��õ��ڱ������Ѿ������ a*a+b*b
	return 0;
} 
 

//������Ĭ�ϲ���
//#include <iostream>
//using namespace std;
//int p1=2,p2=10;//ȫ�ֱ��� 
//int max(int a,int b)
//{
//	return a>b?a:b;
//}
//int tiji(int l=1,int w=p1+p2,int h=max(p1,p2)){
//	return l*w*h;
//} 
//int main(){
//	cout<<"v1="<<tiji()<<endl;//����Ĭ�ϲ����Ĵ��� ������ֻ������ʱ������ֵ�ᱻ���ΪĬ��ֵ 
//	cout<<"v2="<<tiji(5)<<endl; 
//	cout<<"v3="<<tiji(5,10)<<endl;
//	cout<<"v4="<<tiji(5,10,15)<<endl;
//	return 0;
//} 

//�������� 
//#include <iostream>
//using namespace std;
//int max(int a,int b){
//	return (a>b?a:b);
//}
//double max(double a,double b){
//	return (a>b?a:b);
//}
//long  max(long  a,long b){
//	return (a>b?a:b);
//}
//int main(){
//	int i,j,k;
//	cin>>i>>j;
//	k=max(i,j);
//	cout<< "int max="<<k<<endl;
//	double a,b,z;
//	z=max(a,b);
//	cout<<"double max="<<z<<endl;
//	long w=339973,m=3487890,c;
//	c=max(w,m);
//	cout<<"long max="<<c<<endl;
//	return 0;//ʹ��2�����ио�������������Ϊ�����������ڸ�ֵʱ���벻���� 
//} 

//���뺯��ģ��---Ϊ�˽���������ص��ظ����� 

//#include<iostream>
//using namespace std;//�˴���T������������ͻ��Զ�ת�� 
//template<class T> T add(T a,T b)
//{
//	return a+b;
// } 
// int main(){
// 	cout<<"int add="<<add(10,20)<<endl;
// 	cout<<"double add="<<add(10.5,20.9)<<endl;
// 	cout<<"char add="<<add('lwh','hjy')<<endl;
// 	return 0;
// }

//����Ƕ�� ----��������Ƕ�׵ľ������ 
//#include <iostream>
//using namespace std;
//int fa(int a,int b);//����˵�� 
//int fb(int x);
//int main(){
//	int a=5,b=10,c;
//	//cin>>a>>b; 
//	c=fa(a,b);cout<<c<<endl;
//	c=fb(a+b);cout<<c<<endl;
//	return 0;
//} 
//int fa(int a,int b){
//	int z;
//	z=fb(a*b);//ע��˴��ĺ���Ƕ����fb֮��Ĺ�ϵ���Լ���������ֵ 
//	return z;
//}
//int fb(int x){
//	int a=15,b=20,c;//��a,b����Ĭ��ֵ 
//	c=a+b+c;
//	return c; 
//}

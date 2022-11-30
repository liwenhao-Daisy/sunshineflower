����Ƕ�׵���-----Ϊʲô���������� 
 #include <iostream>
 #include<cmath>
 using namespace std;
 double f(double x){
 	return x*x*x*-3*x-1;
 }
 double point(double a,double b){
 	return (a*f(b)-b*f(a))/(f(b)-f(a));
 }
 double root(double a,double b){
 	double x,y,y1;
 	y1=f(a);
 	do{
 		x=point(a,b);
 		y=f(x);
 		if(y*y1>0)y1=y,a=x;
 		else b=x;
	 }while (fabs(y)>=0.000001);
	 return x;
 }
 int main(){
 	double a,b;
 	cin>>a>>b;
 	cout<<"root="<<root(a,b)<<endl;
 	return 0;
 }
 
 //�����ĵݹ����
 #include<iostream>//�ѵݹ��������ջ�Ľṹ���Ƚ���� 
 using namespace std;
 int f(int n){
 	if(n>1)return  f(n-1)*n;//�ݹ���� 
 	return 1;
 }
 int main(){
 	int n;
 	cin>>n;//�����ӽ����޸ģ���������������� 
 	cout<<f(n)<<endl;
 	return 0;
 } 
 
 //��ŵ�� 
 void hanoi(int n,char A,char B,char C)
 {
 	if(n==1)cout<<A<<'->'<<C<<" ";//ֻ��һ��ƿ�� 
 	else{
 		hanoi(n-1,A,C,B);//n-1������A-��B 
 		cout<<'A'<<"->"<<C<<" ";
 		hanoi(n-1,B,A,C);
	 }
 }
 int main(){
 	int n;
 	cin>>n;
 	hanoi(n,'A','B','C');
 	return 0;
 }

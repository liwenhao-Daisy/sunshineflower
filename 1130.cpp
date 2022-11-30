函数嵌套调用-----为什么输出结果不对 
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
 
 //函数的递归调用
 #include<iostream>//把递归调用理解成栈的结构，先进后出 
 using namespace std;
 int f(int n){
 	if(n>1)return  f(n-1)*n;//递归调用 
 	return 1;
 }
 int main(){
 	int n;
 	cin>>n;//与例子进行修改，这样更具有灵活性 
 	cout<<f(n)<<endl;
 	return 0;
 } 
 
 //汉诺塔 
 void hanoi(int n,char A,char B,char C)
 {
 	if(n==1)cout<<A<<'->'<<C<<" ";//只有一个瓶子 
 	else{
 		hanoi(n-1,A,C,B);//n-1个盘子A-》B 
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

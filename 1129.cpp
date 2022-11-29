//函数的默认参数
//#include <iostream>
//using namespace std;
//int p1=2,p2=10;//全局变量 
//int max(int a,int b)
//{
//	return a>b?a:b;
//}
//int tiji(int l=1,int w=p1+p2,int h=max(p1,p2)){
//	return l*w*h;
//} 
//int main(){
//	cout<<"v1="<<tiji()<<endl;//对于默认参数的处理 ，其中只含部分时，其他值会被替代为默认值 
//	cout<<"v2="<<tiji(5)<<endl; 
//	cout<<"v3="<<tiji(5,10)<<endl;
//	cout<<"v4="<<tiji(5,10,15)<<endl;
//	return 0;
//} 

//函数重载 
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
//	return 0;//使用2过程中感觉到敲这个代码较为繁琐，并且在赋值时输入不方便 
//} 

//导入函数模板---为了解决函数重载的重复定义 

//#include<iostream>
//using namespace std;//此处的T根据输入的类型会自动转换 
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

//函数嵌套 ----再理解理解嵌套的具体过程 
//#include <iostream>
//using namespace std;
//int fa(int a,int b);//函数说明 
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
//	z=fb(a*b);//注意此处的函数嵌套与fb之间的关系，以及最后输出的值 
//	return z;
//}
//int fb(int x){
//	int a=15,b=20,c;//给a,b赋予默认值 
//	c=a+b+c;
//	return c; 
//}

#include <iostream>
using namespace std;
//判断一个素是否是素数----函数的定义 
//int ss(int m){
//	for(int i=2;i<=m-1;i++)
//	   if(m%i==0)return 0;
//	return 1;
//}
//int main(int argc, char** argv) {
//	int m;
//	cin>>m;
//	if(ss(m))
//	cout<<"是素数。"<<endl;
//	else
//	cout<<"不是素数。"<<endl;
//	return 0;
//}

//函数的声明
//#include <cmath>
//int gcd(int a,int b);
//int main(){
//	int m,n;
//	cin>>m>>n;
//	cout<<gcd(m,n)<<endl;
//	return 0;
//} 
//int gcd(int a,int b){//注意在输入两个数时，之间要用空格隔开 
//	return b? gcd(b,a%b):a;//思考一下原本的欧几里得算法 
//}


//内联函数----是未学习和了解过的新知识
inline int fun(int a,int b)//添加了inline函数就代表这个是内联函数 
	{
		return a*a+b*b;
	}
int main(){
	int m,n;
	cin>>m>>n;
	cout<<fun(m,n)<<endl;//此处的调用点在编译后就已经变成了 a*a+b*b
	return 0;
} 
 

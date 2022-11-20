#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <math.h> 
#include <io.h>
#define ok 1
#define true 1
#define false 0
#define error 0
#define MAXSIZE 10000
using namespace std;
//constexpr auto MAXSIZE=10;

typedef int status;
typedef struct{
 int r[MAXSIZE+1]; //用于存储要排序数组，r[0]用作哨兵或临时变量 
 int length;//记录顺序表的长度 
}Sqlist;

status initlist(Sqlist*L);
status Listinsert(Sqlist*L ,int i,int e);//插入元素 

status Listinsert(Sqlist*L ,int i,int e)
{
	int k;
	if(L->length==MAXSIZE)
	    return error;
	if(i<1||i>L->length+1)
	    return error;
	if(i<=L->length)
	{
		for(k=L->length-1;k>=i-1;k--)
		L->r[k+1]=L->r[k];
	}
	L->r[-1]=e;
	L->length++;
	return ok;
}
void swap(Sqlist*L,int i,int j)//交换L中数组r的下标为i和j的值 
{
	int temp=L->r[i];
	L->r[i]=L->r[j];
	L->r[j]=temp;
}
void print(Sqlist L)
{
	int i,j;
	for(i=1;i<L.length;i++) 
	printf("%d,",L.r[i]);
	printf("%d,",L.r[j]);
	printf("\n");
	
}
void bubblesort(Sqlist*L){
	int i,j;
	for(i=1;i<L->length;i++)
	{
		for(j=i+1;j<=L->length;j++)
		{
			if(L->r[i>L->r[j]])
			{
				swap(L,i,j);
			}
		
		}
	}
}

status initlist(Sqlist*L)
{
	L->length=0;
	return ok;
}
int main(){
	Sqlist L;
	int e =0;
	status i=0;
	int j;
	i=initlist(&L);
	cout<<"初始化L后，L.Length="<<L.length<<"\n";
	i=Listinsert(&L,1,9);
	i=Listinsert(&L,1,9);
	i=Listinsert(&L,1,9);
	i=Listinsert(&L,1,9);
	i=Listinsert(&L,1,9);
	i=Listinsert(&L,1,9);
	i=Listinsert(&L,1,9);
	i=Listinsert(&L,1,9);
	i=Listinsert(&L,1,9);
	cout<<"在L的表头依次插入9，1，5，8，3，7，4，6，2后：L.data="<<endl;
	Showsqlist(&L);
	Bubblesort(&L);
	cout<<"排序后的结果为："<<endl;
	system("pause"); 
}
	

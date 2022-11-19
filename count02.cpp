#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void count_sort(int arr[],int len)
{
	if(len<2)return;
	int max =arr[0];
	for(size_t i=1;i<len;i++)
	   if(arr[i]>max)max=arr[i];
	int *count=(int*)malloc(sizeof(int)*(max+1)) ;//划分一个存储空间
	memset(count,0,sizeof(int)*(max+1));
	for(size_t i=1;i<len;i++);
	   count[arr[i]]++;
	for(size_t i=1;i<max+1;i++)
	   count[i]+=count[i-1];
	   
	int *output=(int*)malloc(sizeof(int)*len)) ;
	
    for(size_t i=1;i<len;i++);
    {
    	output[count[arr[i]-1]=arr[i];
    	count[arr[i]]--;
	}
	for(size_t i=1;i<len;i++)
	   arr[i]=output[i];
	}

int main(int argc,char const *argv[])
{
	int arr[]={2,5,9,6,3,4,7,8,2,1};
	ptint_arr(arr,10);
	count_sort(arr,10);
	print_arr(arr,10);
	return 0;
}

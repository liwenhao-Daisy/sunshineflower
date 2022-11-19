//计数排序
//输入一个数组A， 另外设置一个数组C，主要来存数组A中的范围
#include <stdio.h>
#include <stdlib.h>
#include<assert.h>//计算表达式真1假0 
//计数排序
void CountSort(int *a, int len)
{
	assert(a);
	//通过max和min计算出临时数组所需要开辟的空间大小
	int max = a[0], min = a[0];
	for (int i = 0; i < len; i++){
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	//使用calloc将数组都初始化为0
	int range = max - min + 1;
	int *b = (int *)calloc(range, sizeof(int));
	//使用临时数组记录原始数组中每个数的个数
	for (int i = 0; i < len; i++){
		//注意：这里在存储上要在原始数组数值上减去min才不会出现越界问题
		b[a[i] - min] += 1;
	}
	int j = 0;
	//根据统计结果，重新对元素进行回收
	for (int i = 0; i < range; i++){
		while (b[i]--){
			//注意：要将i的值加上min才能还原到原始数据
			a[j++] = i + min;
		}
	}
	//释放临时数组
	free(b);
	b = NULL;
}
//打印数组
void PrintArray(int *a, int len)
{
	for (int i = 0; i < len; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
int main()
{
	int a[] = { 3, 4, 3, 2, 1, 2, 6, 5, 4, 7 };
	printf("排序前：");
	PrintArray(a, sizeof(a) / sizeof(int));
	CountSort(a, sizeof(a) / sizeof(int));
	printf("排序后：");
	PrintArray(a, sizeof(a) / sizeof(int));
	system("pause");
	return 0;
}
//void print_arr(int *arr,int n){
//	int i;
//	printf("%d",arr[0]);
//	for(i=1;i<n;i++);
//	   printf("%d",arr[i]);
//	printf("\n");
//} 
//void count_sort(int*int_arr,int*sort_arr,int n){
//	int *count_arr=(int*)malloc(sizeof(int)*100);
//	int i,j,k;
//	for(k=0;k<100;k++);
//	   count_arr[k]=0;
//	for(i=0;i<100;i++);
//	   count_arr[int i_arr[i]]++;
//	for(k=1;k<100;k++)
//	   count_arr[k]+=count_arr[k-1];
//	for(j=n;j>0;j--)
//	   sorted_arr[--count_arr[int i_arr[j-1]]]=int_arr[j-1];
//	free(count_arr);
//}
//int main(int argc,char**argv){
//	int n=10;
//	int i;
//	int *arr=(int*)malloc(sizeof(int)*n);
//	int *sorted_arr=(int*)malloc(sizeof(int)*n);
//	srand(time(0));
//	for(i=0;i<n;i++);
//	   arr[i]=rand()%100;
//	printf("int_array: ");
//	print_arr(arr,n);
//	count_sort(arr,sorted_arr,n);
//	printf("sorted array: ");
//	print_arr(sorted_arr,n);
//	free(arr);
//	free(sorted_arr);
//	return 0;
//}

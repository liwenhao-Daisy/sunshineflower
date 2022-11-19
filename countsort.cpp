//��������
//����һ������A�� ��������һ������C����Ҫ��������A�еķ�Χ
#include <stdio.h>
#include <stdlib.h>
#include<assert.h>//������ʽ��1��0 
//��������
void CountSort(int *a, int len)
{
	assert(a);
	//ͨ��max��min�������ʱ��������Ҫ���ٵĿռ��С
	int max = a[0], min = a[0];
	for (int i = 0; i < len; i++){
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	//ʹ��calloc�����鶼��ʼ��Ϊ0
	int range = max - min + 1;
	int *b = (int *)calloc(range, sizeof(int));
	//ʹ����ʱ�����¼ԭʼ������ÿ�����ĸ���
	for (int i = 0; i < len; i++){
		//ע�⣺�����ڴ洢��Ҫ��ԭʼ������ֵ�ϼ�ȥmin�Ų������Խ������
		b[a[i] - min] += 1;
	}
	int j = 0;
	//����ͳ�ƽ�������¶�Ԫ�ؽ��л���
	for (int i = 0; i < range; i++){
		while (b[i]--){
			//ע�⣺Ҫ��i��ֵ����min���ܻ�ԭ��ԭʼ����
			a[j++] = i + min;
		}
	}
	//�ͷ���ʱ����
	free(b);
	b = NULL;
}
//��ӡ����
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
	printf("����ǰ��");
	PrintArray(a, sizeof(a) / sizeof(int));
	CountSort(a, sizeof(a) / sizeof(int));
	printf("�����");
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

//冒泡排序
//方法1：采用两层循环 
# include <stdio.h>
int main(void)
{
    int a[] = {900, 2, 3, -58, 34, 76, 32, 43, 56, -70, 35, -234, 532, 543, 2500};
    int n;  //存放数组a中元素的个数
    int i;  //比较的轮数
    int j;  //每轮比较的次数
    int buf;  //交换数据时用于存放中间数据,相当于temp 
    n = sizeof(a) / sizeof(a[0]);  /*a[0]是int型, 占4字节, 所以总的字节数除以4等于元素的个数*/
    for (i=0; i<n-1; ++i)  //比较n-1轮
    {
        for (j=0; j<n-1-i; ++j)  //每轮比较n-1-i次,
        {
            if (a[j] < a[j+1])
            {
                buf = a[j];
                a[j] = a[j+1];
                a[j+1] = buf;
            }
        }
    }
    for (i=0; i<n; ++i)
    {
        printf("%d\x20", a[i]);
    }
    printf("\n");
    return 0;
}
/*关于冒泡排序优化 
//#include <stdio.h>
//#include <stdlib.h>
//void paopaosort(int *arr,unsigned int n)
//{
//	if(n<=1)
//	return ;
//	int ii;//说明需要进行比较的次数 
//	int jj;//与之进行每趟排序的元素位置 
//	int temp;//交换时所寄存的临时变量 
//	for(ii=n-1;ii>0;ii--)//进行n-1次比较 
//	{
//		for(jj=0;jj<ii;jj++){
//			if(arr[jj]>arr[jj+1])
//			{
//				temp=arr[jj+1];
//				arr[jj+1]=arr[jj];
//				arr[jj]=temp;
//			}
//		}
//	}
// } 
// 
// int main(int argc,char *argv[])
// {
// 	int arr[]={45,23,15,46,7,5,3,6,41,22,26,21};
// 	paopaosort(arr,12);
// 	int ii;
// 	for(ii=0;ii<12;ii++)
// 	printf("%d",arr[ii]);
// 	printf("\n");
// 	return 0;
// }

//ð������
//����1����������ѭ�� 
# include <stdio.h>
int main(void)
{
    int a[] = {900, 2, 3, -58, 34, 76, 32, 43, 56, -70, 35, -234, 532, 543, 2500};
    int n;  //�������a��Ԫ�صĸ���
    int i;  //�Ƚϵ�����
    int j;  //ÿ�ֱȽϵĴ���
    int buf;  //��������ʱ���ڴ���м�����,�൱��temp 
    n = sizeof(a) / sizeof(a[0]);  /*a[0]��int��, ռ4�ֽ�, �����ܵ��ֽ�������4����Ԫ�صĸ���*/
    for (i=0; i<n-1; ++i)  //�Ƚ�n-1��
    {
        for (j=0; j<n-1-i; ++j)  //ÿ�ֱȽ�n-1-i��,
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
/*����ð�������Ż� 
//#include <stdio.h>
//#include <stdlib.h>
//void paopaosort(int *arr,unsigned int n)
//{
//	if(n<=1)
//	return ;
//	int ii;//˵����Ҫ���бȽϵĴ��� 
//	int jj;//��֮����ÿ�������Ԫ��λ�� 
//	int temp;//����ʱ���Ĵ����ʱ���� 
//	for(ii=n-1;ii>0;ii--)//����n-1�αȽ� 
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

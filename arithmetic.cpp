#include<stdio.h> 
#define V 100 
int f[10][V];//ȫ�ֱ������Զ���ʼ��Ϊ0 
int weight[10];  
int value[10];  
#define max(x,y) (x)>(y)?(x):(y) 
int main()  
{  
    //��ʼ��
    int N,M; 
    freopen("1.txt","r",stdin); 
    scanf("%d%d",&N,&M);//N��Ʒ���� M�������� 
    for (int i=1;i<=N; i++)  
    {  
        scanf("%d%d",&weight[i],&value[i]); 
    }  
    //��̬�滮����
    for (int i=1; i<=N; i++)  
        for (int j=1; j<=M; j++)  
        {  
            if (weight[i]<=j)  
            {  
                f[i][j]=max(f[i-1][j],f[i-1][j-weight[i]]+value[i]);  
            }  
            else  
                f[i][j]=f[i-1][j];  
        }  
      printf("%d\n",f[N][M]);//������Ž�

     //���ѡ�����Ʒ
    int j = M;
    int x[V];
    for(int i=N; i>0; --i)
    {
        if(f[i][j] > f[i-1][j])
        {
            x[i-1] = 1;
            j = j - weight[i-1];//װ���i-1����ʯ�󱳰���װ��������ֻʣ��j - V[i-1]
        }
    }
    for(int i=0; i<N; ++i)  
        printf("%d ", x[i]);  

}   
//����ö�١���α����
/*if c<o then    //������������ 
    return -����
   end
   if i<=h-1(����ɾȥh����˴������дi<=0��then   //������Ʒ�����Ѿ���ɣ�û����Ʒ�� 
     return 0
   end
   if p(i,c)!=null then
    return 0
   end   // 
   p1->ksMR(i-1,c-vi)
   p2->ksMR(i-1,c) 
   p(i,c)<-{p1+pi,p2}
   return p*/
 //#include <stdio.h>
 //��̬�滮֮�������⡪��α����
 /*for i<-0 to n ----����һ����ά���� 
      p[0,i]
	end
	for i<-0 to m do
	  p[i,0]
	end 
   for i<-1 to m do---����� 
     for c<-1 to n do-----������������� 
        if(money<=n) and-----ѡ��Ӳ�� 
		(1+p[m-1,n-m]>p[m-1,n]) then---��¼�۸�;��� 
		   p[i,c]<-(p[n]+p[m-1,n-m]) 
           rec[i,c]<-1
        end
        else----��ѡ��Ʒ 
          p[i,c]<-p[i-1,c]
		  rec[i,c]
		end
	  end
	end
//������Žⷽ��
    K<-C
	for i<-n to 1 do
	    if rec[i,K]= 1 then
		   printf ѡ����Ʒ
		   K<-K-Vi  -----����������  
		end
		else
		   printf ��ѡ��Ʒ
		end
	end
	return p[n,C] 
void MakeMoney(int *money, int len, int total)
{
    int *coinMoney = new int[total + 1];   //�±�Ϊ0��λ�ò���
    coinMoney[0] = 0;
    int i = 1;
    //i-->Ǯ����ֵ��money[i]��ʾ�������СӲ����
    for (; i <= total; i++)    //i����1~total֮���ÿ�ֱ�ֵ������Ǯ��Ҳ��������������
    {
        int minMoney = i;
        for (int j = 0; j < len; j++)   //j�ǿ���ÿ��Ǯ����ֵ�Ƿ�������Ǯ�ķ�Χ��
        {
            if (i >= money[j])   //Ҫ�ҵ���Ǯi����Ӳ�ҵ���ֵ
            {
                int tmp = coinMoney[i - money[j]] + 1;
                if (tmp < minMoney)   //��������Ҫ�����ٵ�Ӳ����
                {
                    minMoney = tmp;
                }
            }
        }
        coinMoney[i] = minMoney;
    }
    printf("����Ϊ%d��Ҫ����СӲ����Ϊ%d\n", total, coinMoney[i-1]);
    delete[]coinMoney;
}

int main()
{
    int money[] = { 1, 2, 5, 21, 25 };
    int len = sizeof(money) / sizeof(money[0]);
    int total = 63;
    MakeMoney(money, len, total);
    return 0;
}  */
//#include <stdio.h>
//#define n
//
//int main(){
//	int a[][m];
//	int b[m][];
//		
//	int n;
//	int m; 
//	int count=0;//�������Ӳ���� 
//	for(int i=1;i<=m;i++)  //��������ʱ��ֵ������ 
//	return 0;
//}
//
//void money(){
//	if(n<=0){
//		printf("��Ŀ��������ɡ�");
//	}
//	else{
//		
//	}
//}

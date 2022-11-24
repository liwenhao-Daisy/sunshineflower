#include<stdio.h> 
#define V 100 
int f[10][V];//全局变量，自动初始化为0 
int weight[10];  
int value[10];  
#define max(x,y) (x)>(y)?(x):(y) 
int main()  
{  
    //初始化
    int N,M; 
    freopen("1.txt","r",stdin); 
    scanf("%d%d",&N,&M);//N物品个数 M背包容量 
    for (int i=1;i<=N; i++)  
    {  
        scanf("%d%d",&weight[i],&value[i]); 
    }  
    //动态规划分析
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
      printf("%d\n",f[N][M]);//输出最优解

     //输出选择的物品
    int j = M;
    int x[V];
    for(int i=N; i>0; --i)
    {
        if(f[i][j] > f[i-1][j])
        {
            x[i-1] = 1;
            j = j - weight[i-1];//装入第i-1个宝石后背包能装入的体积就只剩下j - V[i-1]
        }
    }
    for(int i=0; i<N; ++i)  
        printf("%d ", x[i]);  

}   
//蛮力枚举——伪代码
/*if c<o then    //背包容量不够 
    return -无穷
   end
   if i<=h-1(可以删去h，则此处代码改写i<=0）then   //所有商品决策已经完成，没有商品了 
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
 //动态规划之找零问题——伪代码
 /*for i<-0 to n ----创建一个二维数组 
      p[0,i]
	end
	for i<-0 to m do
	  p[i,0]
	end 
   for i<-1 to m do---求解表格， 
     for c<-1 to n do-----依次求解子问题 
        if(money<=n) and-----选择硬币 
		(1+p[m-1,n-m]>p[m-1,n]) then---记录价格和决策 
		   p[i,c]<-(p[n]+p[m-1,n-m]) 
           rec[i,c]<-1
        end
        else----不选商品 
          p[i,c]<-p[i-1,c]
		  rec[i,c]
		end
	  end
	end
//输出最优解方案
    K<-C
	for i<-n to 1 do
	    if rec[i,K]= 1 then
		   printf 选择商品
		   K<-K-Vi  -----回溯子问题  
		end
		else
		   printf 不选商品
		end
	end
	return p[n,C] 
void MakeMoney(int *money, int len, int total)
{
    int *coinMoney = new int[total + 1];   //下标为0的位置不用
    coinMoney[0] = 0;
    int i = 1;
    //i-->钱币面值，money[i]表示找零的最小硬币数
    for (; i <= total; i++)    //i控制1~total之间的每种币值都找零钱，也就是若干子问题
    {
        int minMoney = i;
        for (int j = 0; j < len; j++)   //j是控制每种钱币面值是否在找零钱的范围内
        {
            if (i >= money[j])   //要找的零钱i大于硬币的面值
            {
                int tmp = coinMoney[i - money[j]] + 1;
                if (tmp < minMoney)   //更新所需要的最少的硬币数
                {
                    minMoney = tmp;
                }
            }
        }
        coinMoney[i] = minMoney;
    }
    printf("找零为%d需要的最小硬币数为%d\n", total, coinMoney[i-1]);
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
//	int count=0;//所输出的硬币数 
//	for(int i=1;i<=m;i++)  //所导出的时面值的数量 
//	return 0;
//}
//
//void money(){
//	if(n<=0){
//		printf("该目标金额已完成。");
//	}
//	else{
//		
//	}
//}

#include<stdio.h>
int main()
{
    int n,k,j,m,p;
    scanf("%d",&n);
    scanf("%d",&k);
    scanf("%d",&j);
    scanf("%d",&m);
    scanf("%d",&p);
    
    if(n<=0||k<=0||j<=0||m<=0||p<=0)
    {
        printf("INVALID INPUT");
    }
   else
   {
    
   int b=m/k;
   int Pe=p/j;
   int jm=b+Pe;
   int rm=n-jm;
   printf("Number of  Monkeys left on the tree:%d",rm);
   }
    
}

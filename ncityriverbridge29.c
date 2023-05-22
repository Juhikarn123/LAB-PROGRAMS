#include<stdio.h>
int lis(int a[], int n)
{ 
    int i, j;
    int b[n];
    for(i=0;i<n;i++)
        b[i]=1;
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]>a[j] && b[i]<b[j]+1)
            {
                b[i]=b[j]+1;
            }
        }
    }
    int max=0;
 
    for(i=0;i<n;i++)
    {
        if(b[i]>max)
        max=b[i];
    }
 
    return max;
}
 
 
int main()
{
    int i;
    int n;
    int index;
    scanf("%d",&n);
 
    int first_end[n];
    int other_end[n];
    int reorder_first_end[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&first_end[i]);
        first_end[i]=i;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&other_end[i]);
 
        index=other_end[i];
        reorder_first_end[index]=i+1;
    }
 
    printf("Maximum number of cities for which bridges can be made is %d",lis(reorder_first_end,n));
    return 0;
}

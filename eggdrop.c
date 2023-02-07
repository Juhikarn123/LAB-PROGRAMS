/* You are given N identical eggs and you have access to a K-floored building
from 1 to K.
There exists a floor f where 0<=f<=k such that any egg dropped at a floor higher
than f will break,and any egg dropped at or below floor f will not break.There are
few rules given below.

.An egg that survives a fall can be used again.
.A broken egg must be discarded.
.The effect of a fall is the same for all eggs.
.if the egg doesn't break at a certain floor.it will not break at any floor below.
.if the eggs breaks at a certain floor,it will break at any floor above.

Return the minimum number of moves that you need to determine with certainly
what the value of f is.

Example 1:
Input:
N=1,K=2
Output:2
Explanation:
1.Drop the egg from floor 1.If it breaks ,we know that f=0.
2.Otherwise ,drop the egg from floor 2.if it breaks,we know that f=1.
3.Hence ,we need at minimum 2 moves to determine with certainty what the value of f is.

Example 2:
Input:
N=2,k=10
Output:4

*/

code:-
#include<stdio.h>
#include<limits.h>

int max(int a ,int b)
{
    return(a>b)?a:b;
}

int eggDrop(int n,int k)
{
    if(k==1 || k==0)
    return k;
    if(n==1)
    return k;
    int min=INT_MAX,f,res;
    for(f=1;f<=k;f++)
    {
        res=max(eggDrop(n-1,f-1),eggDrop(n,k-f));
        if(res<min)
        min=res;
    }
    return min+1;
}




int main()
{
    int n,k,f;
    scanf("%d",&n);
    scanf("%d",&k);
    printf("%d",eggDrop(n,k));
    return 0;
}

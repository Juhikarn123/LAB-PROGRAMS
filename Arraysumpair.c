/* Given two unsorted arrays A of size N and B of size M of distinct elements,the task
is to find all pairs from both arrays whose sum is equal to X.

Example 1:

Input:
A[]={1,2,4,5,7}
B[]={5,6,3,4,8}
X=9

output:
1 8
4 5
5 4

Explanation:
(1,8),(4,5),(5,4) are the pairs which sum to 9.

Example 2:

Input:
A[]={-1,-2,-4,-6,5,7}
B[]={6,3,4,0}
X=8

output:
4 4
5 3

Your Task:
You to read input and print the output. Your task is  takes the array A[], B[],
its size N and M respectively and an integer X as inputs and returns the
sorted vector pair values of all the pairs u,v where u belongs to array A and v
belongs to array B. If no such pair exist return empty vector pair.
*/

code:-
#include<stdio.h>
int main()
{
    int a[10],b[10],n,m,sum,i,j,count=0;
    //scanf("%d",&n);
    //scanf("%d",&m);
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<5;j++)
    {
        scanf("%d",&b[j]);
    }
    scanf("%d",&sum);

    for (int i = 0; i <5; i++)
    {

        for (int j =0; j < 5; j++)
        {
            if(a[i]+b[j]==sum)
            {
                 printf("Pair found (%d,%d)\n",a[i],b[j]);
            }
           else
           count++;
        }
    }


    if(count>=25)
    {
        printf("Pair not found");
    }
}



/* Given an unsorted array A of size N that contains pnly non-negative integers.find a continuous sub-array which adds to a given number S.
in case of multiple subarrays,return the subarray which comes first on moving from left to rigjht.

Input:
N=5,S=12
A[]={1,2,3,7,5}
Output: 2 4
Explanation:The sum of elements from 2nd position to 4th position is 12.

Your Task:
You need to read input and print the output. The task is to complete the function subarraySum() which tasks arr,N and S as input parameters and returns an arraylist 
containing the starting and ending positions of the first such accurring subarray from the left where sum equals to S.
The two indexes in the array should be according to 1-based indexing.if no such subarray is found,return as array consisting only one element that is -1. */

code:
#include<stdio.h>
void subArraySum(int A[],int N,int S)
{
    for(int i=0;i<N;i++)
    {
    int cs=A[i];
    if(cs==S)
    {
    printf("%d",i);
    return;
}
else
{
    for(int j=i+1;j<N;j++)
    {
        cs+=A[j];
        if(cs==S)
        {
        printf("%d %d",i,j);
        return;
    }
}
}
}
printf("-1");
return;
}
int main()
{
    int n,A[10],S;
    scanf("%d",&n);
    scanf("%d",&S);
    int N=sizeof(A)/sizeof(A[0]);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&A[i]);
    }
    subArraySum(A,N,S);
    return 0;
}

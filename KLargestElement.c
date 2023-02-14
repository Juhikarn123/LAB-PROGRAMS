/*
Given an array of N positive integers, print k largest elements from the array.

Example-1 :

Input:
N=5,k=2
arr[]={12,5,787,1,23}
output:787 23
Explanation: First Largest element in the array is 787 and the second largest is 23.

Example 2:

Input:
N=7,k=3
arr[]={1,23,12,9,30,2,50}
output:50 30 23
Explanation: Three Largest element in the array are 50,30 and 23.

Your Task:

Complete the function kLargest() that takes the array, N and K as input parameters and returns a list of k largest element in descending order.

*/
code:-

#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void* a, const void* b)
{
	return (*(int*)b - *(int*)a);
}

void kLargest(int arr[], int n, int k)
{
	qsort(arr, n, sizeof(int), cmpfunc);
	for (int i = 0; i < k; i++)
	{
	 printf("%d ", arr[i]);
	}

}
int main()
{
	 int arr[100],n,k,i,j;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(k==0)
    {
        printf("Invalid input");
    }
    else if(k>n)
    {
        printf("K value is greater than array size");
    }
	kLargest(arr, n, k);
}

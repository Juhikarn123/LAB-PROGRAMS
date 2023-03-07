/*
Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N.
Find the missing element.

Example-1
Input:
N=5
A[]={1,2,3,5}
Output:4

Example-2
Input:
N=10
A[]={6,1,2,8,3,4,7,10,5}
Output:9

Task:
You need to read input and print the output.
Complete the function MissingNumber() that takes array and N as input  parameters and returns the value of the missing number.
*/
code:-

#include <stdio.h>
#include<stdbool.h>
int findMissing(int arr[], int N)
{
	int temp[N + 1];
	for (int i = 0; i <= N-2; i++) {
		temp[i] = 0;
	}

	for (int i = 0; i < N-2; i++) {
		temp[arr[i] - 1] = 1;
	}

	int num;
	for (int i = 0; i <= N-2; i++) {
		if (temp[i] == 0)
			return true;
	}
	return false;
}

int main()
{
	int arr[100],n,i;
	scanf("%d",&n);
	for(i=0;i<=n-2;i++)
	{
	    scanf("%d",&arr[i]);
	}
	if(findMissing(arr, n)==true)
	{
	printf("%d",i);
	}
	else if(n==0)
	{
	    printf("Array length should be graterthan zero");
	}
    else if(findMissing(arr+1, n)==false)
	{
	printf("There are 5 numbers, so all numbers are in the range");
	}
}


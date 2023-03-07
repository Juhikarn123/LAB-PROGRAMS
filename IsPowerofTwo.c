/*
Given a non-negative integer N.The task is to check if N is a power of 2.
More Formally,check if N can be expressed as 2^x for some x.

Example 1:
Input:N=1
Output:YES
Explanation:1 is equal to 2 raised to 0(2^0=1).


Example 2:
Input:N=98
Output:NO
Explanation:98 cannot be obtained by nay power of 2.

Task:

Your task is to complete the function isPowerofTwo()
which takes n as a parameter and returns true or false by checking if the given number can be represented as a power of two or not.
*/
code:-
#include<math.h>
#include<stdbool.h>
#include<stdio.h>
bool isPowerOfTwo(int n)
{
	 if(n==0)
	 return false;
     return (ceil(log2(n))==floor(log2(n)));
}

int main()
{
  int n;
  scanf("%d",&n);
  isPowerOfTwo(n)?printf("Yes\n") : printf("No\n");
  return 0;
}

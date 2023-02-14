/*
Given an array of N integers ,write a function that returns true if there is a triplet
(a,b,c) that satisfies a^2+b^2=c^2,otherwise false.

Example 1:
Input:
N=5
Arr[]={3,2,4,6,5}
output:Yes
Explanation:a=3,b=4 and c=5 forms a pythagorean triplet.

Example 2:
N=3
Arr[]={3,8,5}
output:NO
explanation: No such triplet possible

Your Task:

Complete the function checkTriplet() which takes an array arr, single integer n,
as input parameters and returns boolean denoting answer to the problem.



*/
code:-

#include<stdio.h>
#include<stdbool.h>
int isTriplet(int ar[], int n)
{

    for (int i = 0; i < n; i++)
        {
        for (int j = i + 1; j < n; j++)
          {
            for (int k = j + 1; k < n; k++)
            {
              int x = ar[i] * ar[i], y = ar[j] * ar[j], z = ar[k] * ar[k];

                    if (x == y + z || y == x + z || z == x + y)
                    return true;
            }
          }
        }
        return false;

}
int main()
{
    int ar[100],N,i,j;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {

      scanf("%d",&ar[i]);
    }
    if(isTriplet(ar,N) == true)
            printf("Yes");
        else
            printf("No");
}

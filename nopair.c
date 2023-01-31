/* Given an array A containing 2*N+2 positive numbers,out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct.Find the
other two numbers.

Example-1
Input:
N=2
arr[]={1,2,3,2,1,4}
Output:3 4
Explanation: 3 and 4 occur exactly once

Example-2
Input:
N=1
arr[]={2,1,3,2}
Output: 1 3
Explanation:1 3 occur exactly once


Example-4
Input:
N=1
arr[]={0,0,0,0}
Output: Array elements are zero
Explanation:all elements are zero    */

#include<stdio.h>
int main()
{

    int n,a[10],i,j,flag;
    scanf("%d",&n);

    for(i=0;i<2*n+2;i++)
    scanf("%d",&a[i]);

    for(i=0;i<2*n+2;i++)
    {
        if(a[i]==0)
        flag=1;


    else if(a[i]!=0)
    {
        int count=0;
        for(j=0;j<2*n+2;j++)
        {

            if(a[i]==a[j])
              {
                 count++;
              }
        }

        if(count==1)
        {

             printf("%d\t",a[i]);
        }


       else
       {
        flag=2;
       }
    }
    }
if(flag==1)
    printf("Array elements are zero");
if(flag==2)
     printf("Do Not Occur Exactly Once in the array");

}

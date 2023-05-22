#include<stdio.h>
void Leader(int arr[], int N)
{
	for (int i = 0; i <N; i++)
	{
		int j;
		for (j = i+1; j < N; j++)
		{
		  if (arr[i] <=arr[j])
		  break;
		}	
		if (j == N)
		printf("%d\t",arr[i]);
			
    }
}
 int main()
 {
     int n,arr[10];
     scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
          scanf("%d",&arr[i]);
     }
     Leader(arr, n);
	 return 0;
 }

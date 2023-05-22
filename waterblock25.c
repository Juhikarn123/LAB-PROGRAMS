#include<stdio.h>
void main()
{
   int i,j,a,n,number[10],sum=0,flag;
   scanf ("%d", &n);
   for (i=0; i<n; ++i)
      scanf ("%d",&number[i]);
   for (i=0; i<n; ++i)
   {
      for (j=i+1; j<n; ++j)
      {
         if (number[i] < number[j])
         {
            a = number[i];
            number[i] = number[j];
            number[j] = a;
         }
      }
   }
  int sec_big=number[1];
  for(i=0;i<n;i++)
  {
      if(number[i]<number[1])
      {
          sum=sum+(number[1]-number[i]);
          flag=1;
         
      }
       if(number[0]==number[1])
      {
          flag=0;
        
      }
  }
  
  if(flag==1)
  {
      printf("%d",sum);
  }
  if(flag==0)
  {
      printf("0");
  }
  
    
}

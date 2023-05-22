#include<stdio.h>

int main()
{
    
    int n,flag;
    scanf("%d",&n);
    int people[n], house[n];
   
   
    for(int i=0; i<n; i++)
       scanf("%d",&people[i]);
       
    for(int i=0; i<n; i++)
       scanf("%d",&house[i]);
       
    int count = 0;
    for(int i=0; i<n; i++){
        
        for(int j=0; j<n; j++)
        {
            
            if(people[i]<house[j])
            {
            count+=1 ;
            house[j]=-1;
            break ;
            }
           
        }
    }
 
    printf("%d",n-count);
    
  }

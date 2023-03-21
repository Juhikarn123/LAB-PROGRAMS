/*
we want to estimate the cost of painting a property interior wall painting cost is rs 18 per square feet
and exterior wall painting cost is rs 12 square feet .
Take input:
1.Number of interior wall
2.number of exterior wall
3.surface area of each interior 4 wall in units of square feet
4.surface area of each exterior 4 wall in units of square feet

if a user enters zero as the number of wall then skip surface area values as per may don't want to paint that wall
calculate and display the total cost of painting the property
*/



code:-
#include<stdio.h>
int main()
{
    int n1,n2,c1=18,c2=12;
    float a1,a2;
    printf("Number of interior walls:");
    scanf("%d",&n1);
    printf("Number of Exterior walls:");
    scanf("%d",&n2);
    if (n1<0 && n2<0)
    {
        printf("invalid input");
    }
    else if(n1==0 &n2==0)
    {
        printf("not wanted to paint");
    }
    else if(n1>0 && n2>0)
    {
    printf("area of interior walls:");
    scanf("%f",&a1);
    printf("area of Exterior walls:");
    scanf("%f",&a2);
    }
    float sum=a1*c1*n1+a2*c2*n2;
    printf("%f",sum);

}

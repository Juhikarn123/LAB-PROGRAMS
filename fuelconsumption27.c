#include<stdio.h>
int main()
{

    float mile,gallon,mbyg,lbyd,l,d;
    scanf("%f",&l);
    scanf("%f",&d);
    if(l<=0 || d<=0)
    {
        printf("Invalid Input");
    }
    else
    {
    mile=d*0.6214;
    gallon=l*0.2642;
    mbyg=mile/gallon;
    lbyd=(l/d)*100;
    printf("%.2f\n",lbyd);
    printf("%.2f\n",mbyg);
    }
}

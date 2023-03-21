/*
A doctor has a clinic where he serves his patients the doctor's consultation fees are different for different groups of patients depending
on their age. if the patients's age is below 17 ,fees is 200 INR .if the patients's age is between 17 and 40, fees is 400 INR. if patients's
age is above 40, fees is 300INR .write a code to calculate earnings in a day for which one array/list of values representing age of patients
visited on that day is passed as input.

NOTE:-
1.Age should not be zero or less than zero or above 120.
2.Doctor consults a maximum of 20 patients a day.
3.Enter age value (press enter without a value to stop)
*/

code:-
#include<stdio.h>
int main()
{
    int arr[20],n,i,f1=200,f2=400,f3=300,count1=0,count2=0,count3=0;
    printf("enter the number of patients visited that day:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<17)
        {
            count1=count1+1;
        }
       else if(arr[i]>=17 && arr[i]<40)
        {
            count2=count2+1;
        }
        if(arr[i]>40)
        {
            count3=count3+1;
        }
    }
    int sum=f1*count1+f2*count2+f3*count3;
    printf("%d",sum);
}

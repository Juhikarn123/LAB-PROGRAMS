/*
Given a set of N nuts of different sizes and N bolts of different sizes.There is a one-one
mapping between nuts and bolts .Match nuts and bolts efficiently.
comparison of a nut to another nut or a bolt to another bolt is not allowed.It
means nut can only be compared with bolt and bolt can only be compared with nut to see
which one is bigger/smaller.

The elements should follow the following order !#$%&*@^~.

Example 1:
Input:
N=5
nuts[]={@,%,$,#,^}
bolts[]={%,@,#,$,^}
Output:
#$%@^
#$%@^

Example 2:
Input:
N=9
nuts[]={^,&,%,@,#,*,$,~,!}
bolts[]={~,#,@,%,&,*,$,^,!}

Output:
!#$%&*@^~
!#$%&*@^~
Task:
You need to read input and print the output.
Your task is to complete the function matchPairs() which takes an array of characters nuts[],
bolts[] and n as parameters and returns void. You need to change the array itself.
*/
code:-

#include<stdio.h>
void printArray(char arr[])
{
	for(int i = 0; i < 6; i++)
	{
		printf("%c ", arr[i]);
	}
	printf("\n");
}
int partition(char arr[], int low,
			int high, char pivot)
{
	int i = low;
	char temp1, temp2;

	for(int j = low; j < high; j++)
	{
		if (arr[j] < pivot)
		{
			temp1 = arr[i];
			arr[i] = arr[j];
			arr[j] = temp1;
			i++;
		}
		else if(arr[j] == pivot)
		{
			temp1 = arr[j];
			arr[j] = arr[high];
			arr[high] = temp1;
			j--;
		}
	}
	temp2 = arr[i];
	arr[i] = arr[high];
	arr[high] = temp2;
	return i;
}

void matchPairs(char nuts[], char bolts[],
				int low, int high)
{
	if (low < high)
	{

		int pivot = partition(nuts, low,
							high, bolts[high]);

		partition(bolts, low, high, nuts[pivot]);

		matchPairs(nuts, bolts, low, pivot - 1);
		matchPairs(nuts, bolts, pivot + 1, high);
	}
}

int main()
{

	char nuts[] = {'@', '#', '$', '%', '^', '&'};
	char bolts[] = {'$', '%', '&', '^', '@', '#'};

	matchPairs(nuts, bolts, 0, 5);

	printf("Matched nuts and bolts are : \n");

	printArray(nuts);
	printArray(bolts);
}

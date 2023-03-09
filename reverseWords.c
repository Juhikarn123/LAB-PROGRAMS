/*
Given a String S,reverse the string without reversing its individual words.
words are separated by dots.

Example 1:
Input:
S=i.like.this.program.very.much
Output:much.very.program.this.like.i
Explanation:After reversing the whole string(not individual words),the input string becomes much.very.program.this.like.i

Example 2:
Input:
S=pqr.mno
Output:mno.pqr
Explanation:After reversing the whole string(not individual words),the input string becomes mno.pqr

Task:

You need to read input and print the output. Complete the function reverseWords()
which takes string S as input parameter and returns a string containing the words in reversed order.
Each word in the returning string should also be separated by '.'
*/

code:-
#include <stdio.h>
#include <string.h>
void printReverse(char str[])
{
	int length = strlen(str);
	int i,temp;
	for (i = length - 1; i >= 0; i--)
	{
		if (str[i] == '.')
		{
            str[i] = '\0';
			printf("%s.",&(str[i]) + 1);
		}
		else
		if (str[i]==32)
		{
            str[i] ='\0';
			printf("%s ",&(str[i]) + 1);
		}
	/*	else
		{
            temp = str[i];
            str[i] = str[length - i - 1];
            str[length - i - 1] = temp;

		}*/


	}

printf("%s", str);
}
int main()
{
	char str[100];
	gets(str);
	printReverse(str);
	return 0;
}

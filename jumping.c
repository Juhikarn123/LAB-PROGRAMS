/* Given a positive number X.Find the largest jumping Number smaller than
or equal to X.
Jumping Number: A number is called jumping Number if all adjacent digit in
it differ by only 1.All single digit numbers are considered as jumping numbers.
For example 7,8987 and 4343456 are jumping numbers but 796 and 89098 are not.

Example 1:
Input:
X=10
Output:
10
Explanation:
10 is the largest jumping Number
possible for X=10

Example 2:
Input:
X=50
Output:
45
Explanation:
45 is the largest jumping Number
possible for X=50.

*/

code:
    #include <stdio.h>
#include <string.h>

#define MAX_LEN 10

int is_jumping(int num) {
    char str[MAX_LEN];
    sprintf(str, "%d", num);
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        if (abs(str[i] -str[i + 1]) != 1) {
            return 0;
        }
    }
    return 1;
}

int largest_jumping(int num) {
    for (int i = num; i >= 0; i--) {
        if (is_jumping(i)) {
            return i;
        }
    }
    return -1;
}

int main() {
    int num;
    scanf("%d", &num);
    int result = largest_jumping(num);
    printf("%d\n", result);
    return 0;
}


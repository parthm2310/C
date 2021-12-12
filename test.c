#include <stdio.h>

int revnum(int num);

int main() 
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Reversed number = %d", revnum(n));
    return 0;
}

int revnum(int num)
{
	int remainder,rev;
	while (num != 0) {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num /= 10;
    }
    return rev;
}

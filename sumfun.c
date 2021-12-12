#include <stdio.h>
#include<conio.h>

long int addNumbers(int n);

int main() 
{
    int num;
    printf("Enter any natural number: ");
    scanf("%d", &num);
    printf("Sum of natural numbers upto %d is: %d", num, addNumbers(num));
    getch();
}

long int addNumbers(int n) 
{
    if (n != 0)
        return n + addNumbers(n - 1);
    else
        return n;
}


#include <stdio.h>
int main() 
{
int num, i;
   
  //Take input from the user
  //Store it in variable num
 
  printf("Enter any positive integer: ");
  scanf("%d", &num);
   
  //start for loop from 1 to 10 
  
   
  for (i = 1; i <= 12; ++i)
  {
    printf("%d * %d = %d \n", num, i, num * i);
  }
  return 0;
}

#include <stdio.h>  

int main()  
{  
    int i,j,k,m=5,p,q,r,s=1;;  
      
   for( i=1;i<=5;i++)  
   {  
       for( j=1;j<=m-1;j++)  
       {  
           printf(" ");  
       }  
       for( k=1;k<=2*i-1;k++)  
       {  
         printf("*");  
       }  
       m--;  
     
      printf("\n");  
    }  
    
    for(p=5;p>=1;p--)  
   {  
       for(q=1;q<s;q++)  
       {  
           printf(" ");  
       }  
       for(r=1;r<=2*i-1;r++)  
       {  
           printf("*");  
       }  
       s++;  
     
      printf("\n");  
    }  
    return 0;  
}  

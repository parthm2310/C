#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAXSIZE 10

int main()
{
	float x[MAXSIZE];
	int i,n;
	
	float mean, var, SD, sum=0, sum1=0;
	
		for(i=0;i<n;i++)
			sum+=x[i];
			
	mean=sum/n;
	
		for(i=0;i<n;i++)
			sum1+=pow((x[i]-mean),2);
			
	var=sum1/(float)n;
	SD=sqrt(var);
	
	printf("Average of all elements = %f\n",mean);
	printf("Variance of all elements = %f\n",var);
	printf("Standard deviation of all elements = %f\n",SD);
}

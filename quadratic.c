#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c,root1,root2,real,img,disc;
	
	printf("Enter coefficients of A, b and c of quadratic equation: ");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	disc = b*b-4*a*c;
	
		if(disc>0)
	{
		root1= (-b+sqrt(disc))/2*a;
		root2= (-b-sqrt(disc))/2*a;
		printf("\nroot1 = %.2lf \nroot2 = %.2lf", root1, root2);
	}
	
	else if(disc==0)
	{
		root1 = root2 = -b/2*a;
		printf("\nroot1 = root2 = %.2lf", root1);
	}
	
	else
	{
		real = -b/2*a;
		img = sqrt(-disc)/2*a;
		printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2lfi", real, img, real, img);	
	}
}

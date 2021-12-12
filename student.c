#include<stdio.h>
#include<conio.h>

void diaplay(int, char[], int[]);
float average(int[]);

int main()
{
	int roll_no, marks[5],i;
	char name[20], ans='y';
	float avg;
	
	do
	{
		printf("Enter roll number:");
		scanf("%d", &roll_no);
		
		printf("\nEnter student name:");
		scanf("%s", &name);
		
			for(i=0;i<5;i++)
			{
				printf("\nEnter subject %d marks:",i+1);
				scanf("%d", &marks[i]);
			}
			
			display(roll_no, name, marks);
			
			printf("\nAdd more (Y/N) :");
			getchar();
			scanf("%c", &ans);
			printf("\n\n******************************\n");
	}while(ans=='y' || ans=='Y');
	
	getch();
}

void display(int rno, char name[],int marks[])
{
	int i;
	printf("\n******************************\n");
	printf("\nRoll no. : %d",rno);
	printf("\nName : %s",name);
	
		for(i=0;i<5;i++)
			printf("\nSubject %d marks : %d",i+1,marks[i]);
		
		printf("\n\nAverage marks : %f",average(marks));
		printf("\n\n******************************\n");
		
}

float average(int n[])
{
	int sum=0,i;
	for(i=0;i<5;i++)
		sum+=n[i];
	return sum/5;
}

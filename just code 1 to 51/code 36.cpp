#include<stdio.h>
#include<conio.h>
int main()
{
	int count,limit;
	count=1;
	printf("Enter the limit\t");
	scanf("%d", &limit);

	while (count<=limit)
           {
		printf("\n %d", count);
		count=count+1;
	}
	getch();
	
}

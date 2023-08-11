#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("enter the number: ");
	scanf("%d",&num);
	
	if(num %2 ==0)
	{
	printf("even\n");
	}
	else{
		printf("odd\n");
	}
	getch();
}

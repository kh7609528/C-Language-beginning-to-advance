#include<stdio.h>
#include<conio.h>

int main()

{
	int a, b;
	
	printf("enter vakue of Ath variable :\n");
	scanf("%d", &a);
	
	printf("enter vakue of Bth variable :\n");
	scanf("%d", &b);
	
	a-=b;
	printf ("the sum of shorthand is %d\n",a);
	getch();	
	
}

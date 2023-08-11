#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b;
	printf("Enter the value of Ath and Bth variable : ");
	scanf("%d %d", &a, &b);
	printf("The sum is : %d \n", (a+b));
	printf("The sub is : %d \n", (a-b));
	goto jump;
	printf("The multi is : %d \n", (a*b));
	jump: 
	printf("The div is : %d \n", (a/b));
	printf("The mod is : %d \n", (a%b));
	getch();

}

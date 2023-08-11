#include<stdio.h>
#include<conio.h>

int main()
{
	int username, pass;
	
	printf("enter username :\n");
	scanf("%d", &username);
	
	printf("enter password :\n");
	scanf("%d", &pass);

	int result = (username ==1234 && pass == 786)
	?printf ("Successfully login \n")
	:printf("Sorry! wrong Input \n");
	
	getch();
	
}

#include<stdio.h>
#include<conio.h>
int main()
{
	int username, pass;
	printf("Enter the username and pass here :");
	scanf("%d %d", &username, &pass);
	
	
	if(username == 1234 && pass == 786){
		printf("Successfully login");
	}
	getch();
}

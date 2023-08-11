#include<stdio.h>
#include<conio.h>

int main()
{
	int a;
	float b;
	char c;
	double d;
	long e;
	short f;
	
	printf("This size of int %d Bytes\n",sizeof(a));	
	printf("This size of float %d Bytes\n",sizeof(b));
	printf("This size of char %d Bytes\n",sizeof(c));
	printf("This size of double %d Bytes\n",sizeof(d));
	printf("This size of long %d Bytes\n",sizeof(e));
	printf("This size of short %d Bytes\n",sizeof(f));
	
	getch();	
}

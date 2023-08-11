#include<stdio.h>
#include<conio.h>
int main()
{	int eng, phy, isl, chl, phy1, maths, pst;
	int total = 600;
	int obt;
	float per;
	printf("Enter The Marks of Students (where T = 85 and L = 15) :");
	scanf("%d %d %d %d %d %d %d",
	&eng, &phy, &isl, &chl, &phy1, &maths, &pst);
	obt = eng + phy + isl + chl + phy1 + maths + pst;
	printf("Obtained Marks is : %d \n", obt);
	printf("The Total Marks is : %d \n", total);
	per = ((obt*100)/total);
	printf("The percentage is : %f \n", per);
	if (per >= 80){
		printf("A+ \n");
	}
	else if (per >= 70){
		printf("A \n");
	}
	else if (per >= 60){
		printf("B \n");
	}
	else if (per >= 50)	{
		printf("C \n");
	}
	else if (per >= 40)	{
		printf("D \n");
	}
	else{
		printf("Fail \n");
	}
	getch();	
}

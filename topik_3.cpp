#include<stdio.h>
main()
{
	int marks;

	printf("Enter  Marks =");
	scanf("%d",&marks);

	(marks<=100 && marks>=91)? printf("your grade  A")
	:(marks<=89 && marks>=76)? printf("your grade  B")
	:(marks<=74 && marks>=66)? printf("your grade  C")
	:(marks<=64 && marks>=46)? printf("your grade  D")
	:(marks<=44 && marks>=36)? printf("your grade  E")
	:(marks<=34 && marks>=0)? printf("your grade  F")
	:printf("Please try again next ");	
}
/*

EX3:

check the number if positive or negative or zero

*/

# include <stdio.h>

int main()
{
	float A;
	printf("Enter the numbers you want to ckeck:\n ");
	fflush(stdout);
	scanf("\t%f",&A);
	if (A>0)
	{
		printf("\n (%f) is the positive number",A);
	}
	else	if (A<0)
	{
		printf("\n (%f) is the negative number",A);
	}
	else
	{
		printf("\n (%f) is the zero",A);
	}

}

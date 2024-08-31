/*

EX3:

find the largest number

*/

# include <stdio.h>

int main()
{
	float A,B,C;
	printf("Enter the numbers you want to ckeck:\n ");
	fflush(stdout);
	scanf("\t%f %f %f",&A,&B,&C);
	if ((A>B) && (A>C))
	{
		printf("\n (%f) is the largest number",A);
	}
	else	if ((B>C) && (B>A))
	{
		printf("\n (%f) is the largest number",B);
	}
	else
	{
		printf("\n (%f) is the largest number",C);
	}

}

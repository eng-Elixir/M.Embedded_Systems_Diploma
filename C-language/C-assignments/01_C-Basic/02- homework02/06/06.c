/*

EX6:

calculate the summation of integers number

*/

# include <stdio.h>

int main()
{
	int A,i,sum;
	printf("Enter an integers: ");
	fflush(stdout);
	scanf("\t%d",&A);
	
	for (i=0;i<=A;i++)
	{
	   sum =sum +i;
	}
	printf("Sum = %d",sum);
}


/*

EX1:

check number if odd or even

*/

# include <stdio.h>

int main()
{
	again:
	int A;
	char ch;
	printf("Enter the number you want to ckeck: ");
	fflush(stdout);
	scanf("\t%d",&A);
	if ((A%2) == 0)
	{
		printf("\n %d even number",A);
	}
	else
	{
		printf("\n %d odd number",A);
	}
	printf("\nEnter y to try again:");
	fflush(stdout);
	scanf("\t%c",&ch);
	if (ch == 'y')
	{
	   goto again;
	}
	

}

/*

EX7:

calculate the factorial of integers number

*/

# include <stdio.h>

int main()
{
	int A,i,Fact=1;
	printf("Enter an integers: ");
	fflush(stdout);
	scanf("\t%d",&A);
	if(A>=0)
	{
		for (i=1; i<A;)
		{
			i++;
			Fact =Fact *i;
		}
		printf("Fact = %d",Fact);
	}
	else {
		printf("Erorr!! negative number");
	}
}


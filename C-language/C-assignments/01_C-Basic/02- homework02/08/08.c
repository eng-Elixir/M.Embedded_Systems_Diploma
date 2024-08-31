/*

EX8:

calculator

*/

# include <stdio.h>

int main()
{
	char operat;
	float A,B,Z;
	printf("Enter operator + , - , * or / : ");
	fflush(stdout);
	scanf("\t%c",&operat);
	printf("Enter two number : \n");
	fflush(stdout);
	scanf("\t%f %f",&A,&B);
	switch (operat)
	{
	case '+':
	{
		Z=A+B;
		break;
	}
	case '-':
	{
		Z=A-B;
		break;
	}
	case '*':
	{
		Z=A*B;
		break;
	}
	case '/':
	{
		Z=A/B;
		break;
	}

	default:
		printf("\nInput Error");
		break;
	}
	printf("\n %f %c %f = %F",A,operat,B,Z);

}


/*

EX5:

check the character alphabet or not

*/

# include <stdio.h>

int main()
{
	char ch;
	printf("Enter the character you want to ckeck: ");
	fflush(stdout);
	scanf("\t%c",&ch);
	if ((ch > 64 && ch<91) || (ch > 96 && ch < 123))
	{
		printf("\n (%c) is alphabet",ch);
	}
	else
	{
		printf("\n (%c) is not alphabet",ch);
	}

}


/*

EX2:

program to check vowel or consonant

*/

# include <stdio.h>

int main()
{
	char ch;
	printf("Enter the alphabet you want to ckeck: ");
	fflush(stdout);
	scanf("\t%c",&ch);
	if ((ch > 64 && ch<91) || (ch > 96 && ch < 123))
	{
		switch (ch)
		{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
		{
			printf("\n (%c) is a vowel",ch);
		}
		break;
		default:
		{
			printf("\n (%c) is a consonant",ch);
		}
		break;
		}
	}
	else
	{
		printf("\n (%c) is not alphabet",ch);
	}

}

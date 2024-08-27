/*
 * lab4.c
 *  Created on: Aug 27, 2024
 *      Author: Sabri
 *  this code aim to calculate the circle area and circumference.
 */

# include <stdio.h>

int main()
{
	char choise;
	float radios, Area, Circumf, Pi=3.14;
	printf("Enter the radios = ");
	fflush(stdout);
	scanf("%f",&radios);
	printf("\nEnter A for Area or C for Circumference = ");
	fflush(stdout);
	scanf("\n %c",&choise);

	switch(choise)
	{
	case('a'):
	case('A'):
	{
		Area=radios*radios*Pi;
		printf("\nArea = %f",Area);
	}
	break;
	case('c'):
	case('C'):
	{
		Circumf=2*radios*Pi;
		printf("\nCircumference = %f",Circumf);
	}
	break;
	default:
	{
		printf("\nTry again");
	}
	break;
	}

	return 0;
}


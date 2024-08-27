/*
 * lab1.c
 *
 *  Created on: Aug 25, 2024
 *      Author: Sabri
 *  first Lab in C programing languge
 *  this code aim to calculate the circle area and circumference. 
 */

# include <stdio.h>

int main()
{
	char choise;
	float radios, Area, Circumf, Pi=3.14;
	printf("enter the radios \r\n");
	fflush(stdout);
	scanf("%f",&radios);
	printf("\r\n Enter A for Area or C for Circumference \r\n");
	fflush(stdout);
	scanf("\r\n %c",&choise);
	if ((choise == 'A') || (choise =='a'))
	{
		Area=radios*radios*Pi;
		printf("\r\nArea = %f",Area);
	}

	else if ((choise == 'C') || (choise == 'c'))
	{
		Circumf=2*radios*Pi;
		printf("\r\n Circumference = %f",Circumf);

	}

	else
	{
		printf("\r\n Try again");
	}

	return 0;
}

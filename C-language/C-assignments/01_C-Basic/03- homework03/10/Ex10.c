/*
 *
 *  Created on: Sep 9, 2024
 *      Author: Sabri
 *      Homework 3
 */

# include <stdio.h>

int main()

{
	char String[100], Stringinv[100];
	int i=0,j,Length;
	printf("\n Enter a string: ");
	fflush(stdin);
	gets(String);
	for(Length=0; String[Length] != 0 ; Length++)
	{
		i=Length;
	}
	for(j=0; j<Length ; ++j)
	{
		Stringinv[i]=String[j];
		i--;
	}
	printf(" ------------ \n Reverse String: %s ",Stringinv);
}


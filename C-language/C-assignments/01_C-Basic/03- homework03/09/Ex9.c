/*
 *
 *  Created on: Sep 9, 2024
 *      Author: Sabri
 *      Homework 3
 */

# include <stdio.h>

int main()

{
	char String[100];
	int i;
	printf("\n Enter a string: ");
	fflush(stdin);
	gets(String);
	for(i=0; String[i] != 0 ; )
	{
		i++;
	}
	printf("------------ \n  Length of String = %d ",i);
}


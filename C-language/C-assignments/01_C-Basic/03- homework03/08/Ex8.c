/*
 *
 *  Created on: Sep 9, 2024
 *      Author: Sabri
 *      Homework 3
 */

# include <stdio.h>
# include <string.h>

int main()

{
	char String[100],Ch;
	int i,Freq=0;
	printf("\n Enter a string: ");
	fflush(stdin);
	gets(String);
	printf(" Enter a Character to find frequency: ");
	scanf("%c",&Ch);
	for(i=0; String[i] != 0 ; i++)
	{
		if(String[i] == Ch)
		{
			Freq++;
		}
	}
	printf("------------ \n  Frequency of %c = %d ",Ch,Freq);
}


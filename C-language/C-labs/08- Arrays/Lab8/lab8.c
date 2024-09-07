/*
 * Main.c
 *
 *  Created on: Sep 7, 2024
 *      Author: Sabri
 *      Array Example
 */
# include <stdio.h>

int main()

{
	unsigned char x[100];
	unsigned char i,j,r;
	for (i=0 ; i<100 ; i++)
	{
		r=rand()%10;
		x[i]=r;
	}
	for (i=0; i<100 ; )
	{
		printf("\n");
		for (j=i; j<(i+10);)
		{
			printf(" %d", x[j]);
			j++;
		}
		i=j;
	}
	r=0;
	for(i=1; i<99;)
	{
		if((x[i]) > (x[i-1]))
		{
			if((x[i]) > (x[i+1]))
			{
				r=r+1;
			}
		}
		i++;
	}
	printf("\n the total chances = %d",r);
}

/*
 *
 *  Created on: Sep 8, 2024
 *      Author: Sabri
 *      Homework 3
 */
# include <stdio.h>

int main()

{
	int Column,i,j=1,Element,Val;
	printf("\n Enter number of Element = ");
	scanf("%d",&Element);
	int Matrix[Element];
	for(i=0; i<Element; i++)
	{
		printf(" %d ",i+1);
		Matrix[i]= i+1;
	}
	printf("\n Enter the value to be inserted = ");
	scanf("%d",&Val);
	printf("\n Enter the location = ");
	scanf("%d",&Column);
	for (i=0; i<Val; i++)
	{
		if(i==Column-1)
		{
			Matrix[i]= Val;
			printf(" %d ",Matrix[i]);
			continue;
		}
		Matrix[i] = j++;
		printf(" %d ",Matrix[i]);

	}

}


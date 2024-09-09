/*
 *
 *  Created on: Sep 8, 2024
 *      Author: Sabri
 *      Homework 3
 */
# include <stdio.h>

int main()

{
	int Column=0,i,Element,Val;
	printf("\n Enter number of Element = ");
	scanf("%d",&Element);
	int Matrix[Element];
	for(i=1; i<=Element; i++)
	{
		printf(" %d ",i*11);
		Matrix[i-1]= i*11;
	}
	printf("\n Enter the value to be searched = ");
	scanf("%d",&Val);
	for(i=0; i<Element; i++)
	{
		Column++;
		if(Val == Matrix[i])
		{
			printf("\n Value found at the location = %d ",Column);
			break;
		}
	}

}


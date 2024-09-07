/*
 *
 *  Created on: Sep 7, 2024
 *      Author: Sabri
 *      Homework3
 */
# include <stdio.h>

int main()

{
	int i, Val=0, product=1;
	for(i=0; i<4; )
	{
		printf("Enter %d number: ",i+1);
		scanf("%d",&Val);
		if(Val != 0)
		{
			product = product * Val;
			i++;
		}
		else
		{
			continue;
		}
	}
	printf("-------------\nThe product = %d ",product);
}

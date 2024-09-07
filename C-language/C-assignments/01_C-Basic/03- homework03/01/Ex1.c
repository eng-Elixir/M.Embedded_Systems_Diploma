/*
 *
 *  Created on: Sep 7, 2024
 *      Author: Sabri
 *      Homework3
 */
# include <stdio.h>

int main()

{
	int i=1, Val;
	float Average, Sum;
	while(i)
	{
		printf("Enter %d number: ",i);
		scanf("%d",&Val);
		if(Val>0)
		{
			Sum = Sum + Val;
			i++;
		}
		else
		{
			Average = Sum /(i-1);
			printf("The Average = %0.2f",Average);
			break;
		}
	}
}

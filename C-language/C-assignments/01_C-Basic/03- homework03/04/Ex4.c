/*
 *
 *  Created on: Sep 8, 2024
 *      Author: Sabri
 *      Homework3
 */
# include <stdio.h>

int main()

{
	int Num,i;
	printf(" Enter Number of element = ");
	scanf("%d",&Num);
	float Mata[Num],Sum=0;
	for (i=0; i<Num ; i++)
	{
		printf(" Enter element (%d) = ",i+1);
		scanf("%f",&Mata[i]);
		Sum = Sum + Mata[i];
	}
	printf("  ------------ \n Average = %0.2f",Sum/Num);
}

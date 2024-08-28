/*
 * lab6.c
 *  Created on: Aug 28, 2024
 *      Author: Sabri
 *  this code aim to calculate the average
 *  of students degrees.
 */

# include <stdio.h>

int main()
{
	int i,studentNum=0;
	float sum=0,degree=0;

	printf("Enter the number of studints =  ");
	fflush(stdout);
	scanf("%d",&studentNum);

	for (i=1;i<=studentNum; )
	{
		printf("Enter the student (%d) degree =  ",i);
		fflush(stdout);
		scanf("%f",&degree);
		sum =sum+degree;
		i++;
	}
	printf("Average = %f",sum/studentNum);

	return 0;

}

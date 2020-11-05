#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int i;
	int grade[5];
	int sum, average;
	for(i=0; i<5; i++)
	{
		printf("input grade[%i] = ", i);
		scanf("%i", &grade[i]);
	
	}
	
	for(i=0; i<5; i++)
	{
		printf("grade[%i] = %d\n", i, grade[i]);
		sum+=grade[i];
		average=sum/5 ;
	}
	printf("average = %i ", average);
	return 0;
 } 

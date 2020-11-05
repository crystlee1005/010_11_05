#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int i;
	int grade[5];
	int sum;
	int *ptr;
	for(i=0; i<5; i++)
	{   ptr = grade+i;
		printf("input grade[%i] = ", i);
		scanf("%i",ptr);
	
	
	}
	
	for(i=0; i<5; i++)
	{   ptr = & grade[i];
		sum+=*ptr;
		printf("grade[%i] = %d\n", i, *ptr);
		
		
	}
	printf("average = %i\n ", sum/5 );
	return 0;
 } 

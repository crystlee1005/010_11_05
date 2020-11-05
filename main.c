#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap(int *x, int *y) {
    int temp;
    
    temp = *x;
    
	*x = *y;
	*y = temp; //x는 y를 가리키고, y는 x를 가리킨다.  
	
}
void main(void){
	int a =3;
	int b =5;
	swap(&a,&b);
	printf("a: %i, b:%i\n", a, b);
}

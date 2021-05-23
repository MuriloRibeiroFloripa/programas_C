#include <stdio.h>
#include <stdlib.h>

void Swap (int *a, int *b);

int main (void){
	int num1,num2;
	num1 = 100;
	num2 = 200;
	
	Swap (&num1, &num2);
	
	printf ("\n\nEles agora valem %d  %d\n",num1,num2);
	system("pause");
}

void Swap (int *a, int *b)
{
	int temp;
	temp = *a;
	*a =  *b;
	*b = temp;
}

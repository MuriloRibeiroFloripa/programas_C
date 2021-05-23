#include <stdio.h> 
#include <stdlib.h> 

float sqr (float num);

int main ()
{
	float num, sq;
	
	printf ("Entre com um numero: ");
	scanf ("%f",&num);
	
	sq = sqr(num);
	
	printf ("\n\nO numero original e: %.2f\n",num);
	printf ("O seu quadrado vale: %.2f, ou mesmo que: %.0f\n\n",sq, sqr(num));
	system ("pause");
}

float sqr (float num)
{
	num = num * num;
	return num;
}

#include<stdio.h>
#include<stdlib.h>

int main(){
    float f,c;
    printf("\n  Informe a temperatura e graus Celsius: ");
    scanf("%f",&c);
	    
    f=(((9*c)/5)+32);
    
    printf("\n A temperatura em Fahrenheit = %.2f \n\n\n",f);
    system("pause");

    return 0;
}

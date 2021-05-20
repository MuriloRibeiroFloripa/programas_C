#include<stdio.h>
#include<stdlib.h>

int main(){
	
    float f, c;
    
	printf("\n  Informe a temperatura e graus farenheit: ");
    scanf("%f",&f);
    
    c = ((5 / 9) + (f - 32));
    
    
    printf("\n A temperatura em Graus Celsius = %.2f \n\n\n",c);
    
	system("pause");
    return 0;
}

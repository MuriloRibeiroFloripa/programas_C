#include<stdio.h>
#include<stdlib.h>

int main(){
	
    float x = 0, y = 0, z = 0, soma = 0;
    
    printf("\n  Informe o numero x: ");
    scanf("%f",&x);
    
    printf("\n  Informe o numero y: ");
    scanf("%f",&y);

    printf("\n  Informe o numero z: ");
    scanf("%f",&z);
    
    soma = x + y + z;
        
    system("cls");
    
	printf("\n  :::: soma = %.2f             ::::  media = %.2f \n\n\n",soma,soma/3);
    printf("\n  x = %.2f      :::: y = %.2f      ::::  z = %.2f \n\n\n\n\n\n",x,y,z);
    
	system("pause");
    return 0;
}

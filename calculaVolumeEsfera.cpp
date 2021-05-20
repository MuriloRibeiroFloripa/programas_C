#include<stdio.h>
#include<stdlib.h>

int main(){
    float r,v;
    printf("\n  Informe o Raio para saber o Volume da esfera: ");
    scanf("%f",&r);
    
	v=(((4/3)*3.14)*r);    
    
	printf("\n O volume da esfera = %.2f \n\n\n",v);
    system("pause");
    
	return 0;
}










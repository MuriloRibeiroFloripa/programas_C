#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
    float l, h, areap, areat, th, tl;
    
    printf("\n\tInforme largura e a autura da parede\n");
    scanf("%f%f",&l,&h);
    
    printf("\n\tInforme as duas medidas do teto\n");
    scanf("%f%f",&th,&tl);
    
    areap = (l * h);
    areat = (th * tl);
    
    
    printf("\n\t Area total das parede = %.2f metros quadrado\n\n\n",areap);
    printf("\n\t area total do teto= %.2f metros quadrados \n\n\n",areat);
    printf("\n\n\n area total = %.2f ",areap + areat);
    
    
    system("pause");
    return 0;
}

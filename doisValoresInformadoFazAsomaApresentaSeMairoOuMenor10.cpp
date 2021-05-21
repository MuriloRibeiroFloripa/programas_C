#include<stdio.h>
#include<stdlib.h>

int main(){
	
    int x, y, soma;
    
    printf("\n\n\t Forneça um numero x: ");
    scanf("%d",&x);
    
	printf("\n\n\t Forneça um numero y: ");
    scanf("%d",&y);
    
	soma = x + y;
       
    if(soma > 10)
    	printf("\n\n\n        soma=%d Maior que 10 \n\n\n",soma);
    if(soma < 10)
    	printf("\n\n\n        soma=%d Menor que 10 \n\n\n",soma);
    if(soma == 10)
        printf("n\n\n\        soma=%d igaual a 10  \n\n\n",soma);
    
    system("pause");
    return 0;
}
    

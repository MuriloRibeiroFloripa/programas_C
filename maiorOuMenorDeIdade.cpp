#include<stdio.h>
#include<stdlib.h>

int main(){
	
    int x;
    
    printf("\n\n\t Forneça a idade da Pessoa ");
    scanf("%d",&x);
    
    if(x>=18)
   		 printf("\n\n\n        Maior de Idade \n\n\n");
    else
    	printf("\n\n\n        Menor de Idade  \n\n\n");
    

    system("pause");
    return 0;
}

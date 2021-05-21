#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y;
    
    printf("\n\n\t Forneça um numero ");
    scanf("%d",&x);
    
    printf("\n\n\t Forneça um numero ");
    scanf("%d",&y);
    
    if(x==y)
        printf("\n\n\n        Numero de Igual valor \n\n\n");
	else
	    printf("\n\n\n         Numero de valor diferente  \n\n\n");   

    system("pause");
    return 0;
}

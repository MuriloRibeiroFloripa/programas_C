#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y;
    
    printf("    Informe um Numero ");
    scanf("%i",&x);
    
    printf("    Informe um Numero ");
    scanf("%i",&y);
    
    printf("    A soma dos valores ao quadrado eh = %i \n\n\n",((x*x)+(y*y)));
    
    system("pause");
    return 0;
}

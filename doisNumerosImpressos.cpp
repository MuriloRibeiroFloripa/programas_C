#include<stdio.h>
#include<stdlib.h>
int x,y;
int main()
{
    printf("    Informe um Numero ");
    scanf("%i",&x);
    printf("    Informe um Numero ");
    scanf("%i",&y);
    
    system("cls");
    printf("    O primeiro numero que vc digitou eh = %i \n     O Segundo numero que vc digitou eh = %i\n\n",x,y);
    system("pause");
    return 0;
}

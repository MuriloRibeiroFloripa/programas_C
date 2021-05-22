#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char ch;
    float x,y,t;
    int i;

    do{
    for(i = 1; i < 4; i++){

    printf("\n\n\n");
    printf("\t [1] - SOMA \n");
    printf("\t [2] - SUBTRACAO \n");
    printf("\t [3] - MULTIPLICACAO \n");
    printf("\t [4] - DIVISAO  \n");
    printf("\t [5] - SAIR \n");
    printf("\n\t Entre com sua escolha: \n");

    ch=getchar();  /*lê do teclado a seleção*/
       system("cls");
       printf("\n\n\n");



      switch(ch){
                 case'1':
                         printf("\n\tDigite o primeiro numero para soma \n");
                         scanf("%f",&x);
                         printf("\n\tDigite o segundo numero para soma \n");
                         scanf("%f",&y);
                         t = x + y;
                         printf("\n\tSOMA = %.2f\n\n",t);

                         system("pause");
                         continue;

                 case'2':
                         printf("\n\tDigite o primeiro numero para soma \n");
                         scanf("%f",&x);
                         printf("\n\tDigite o segundo numero para soma \n");
                         scanf("%f",&y);
                         t = x - y;
                         printf("\n\tSUBTRACAO = %.2f\n\n",t);

                         system("pause");
                         continue;

                 case'3':
                         printf("\n\tDigite o primeiro numero para soma \n");
                         scanf("%f",&x);
                         printf("\n\tDigite o segundo numero para soma \n");
                         scanf("%f",&y);
                         t = x * y;
                         printf("\n\tMULTIPLICACAO = %.2f\n\n",t);

                         system("pause");
                         continue;

                 case'4':
                         printf("\n\tDigite o primeiro numero para soma \n");
                         scanf("%f",&x);
                         printf("\n\tDigite o segundo numero para soma \n");
                         scanf("%f",&y);
                         t = x / y;
                         printf("\n\tDIVISAO = %.2f\n\n",t);

                         system("pause");
                         continue;
                 case'5':
                         exit(0);

                         }i-=1;
                 }
      }while(ch>5);
}







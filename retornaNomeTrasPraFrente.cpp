// PROGRAM DESENVOLVIDO E COMENTADO POR MURILO RIBEIRO NO 2� ANO SISTEMAS DE INFORMA��O UFMS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// COMANDO RETURN 

/* O comando return tem dois importantes usos. Primeiro, ele provoca a sa�da imediata
da fun��o que o cont�m. Isso �, faz com que a execu��o do programa retorne ao c�digo
chamador. Segundo, ele pode ser usado para desenvolver um valor. */

/*neste exemplo abaixo, a primeira sa�da[ou primeira fun��o] ocorre quando o �ltimo comando da fun��o 
for executado e, conceitualmente, a chave final do programa(}) � encontrada, 
[obviamente, a chave n�o est� realmente presente no c�digo-objeto, mas voce pode
imagin�-la como se estivesse] */

void reverse(char *s);// primeira fun��o que retorna sem o comando return
int find_substr(char *s1,char *s2);

int main(void)
{
    char s[80]; // variavel primeira fun��o
    char x[80]; // variavel da segunda fun��o
    char y[80]; // variavel da segunda fun��o
    printf("\n\t Informe a frase que deseja modificar\n\t Ela sera informada de tras pra frente ");
    gets(s);
    printf("\n\t");
    reverse(s);// chamada de fun��o: primeira fun��o que retorna sem o comando return
    printf("\n\n\n");
    system("pause");
        printf("\n\tInforme a frase que deseja ");
        gets(x);
        printf("\n\tInforme outra frase que deseja ");
        gets(y);
        if(find_substr(x,y)!=-1)
        printf("\n\t A substring n�o foi encontrada");
        
        system ("pause");
    
}

void reverse(char *s)// primeira fun��o que retorna sem o comando return
{
     register int t;
     for(t=strlen(s)-1; t>=0; t--)
     putchar(s[t]);
}/*uma vez que a string tenha sido mostrada, n�o fica nada a fazer na fun��o, de 
forma que ela retorna de onde foi chamada. Poucas fun��es usam esse m�todo 
default de determinar execu��o. A maioria das fun��es adota o comando return 
para encerrar a execu��o, seja porque um valor deve ser devolvido seja para 
tornar o c�digo da fun��o mais simples e eficiente.*/

int find_substr(char *s1, char *s2)// uma fun��o pode ter diversos comandos return.
{
     register int t;
     char *p,*p2;//cria ponteiro para x e y;

     for(t=0;s1[t];t++)
     {
                        p=&s1[t];
                        p2=s2;
                        
                        while(*p2 && *p2==*p)
                        {
                                 p++;
                                 p2++;
                        }
                        if (!*p2)
                        printf("\n\t%s\n\n",t);
                        return t; //1� retorno
     }
     printf("\n\t%s\n\n",t);
     
     return -1; //2� retorno
}

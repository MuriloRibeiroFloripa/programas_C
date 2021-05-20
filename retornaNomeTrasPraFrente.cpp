// PROGRAM DESENVOLVIDO E COMENTADO POR MURILO RIBEIRO NO 2º ANO SISTEMAS DE INFORMAÇÃO UFMS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// COMANDO RETURN 

/* O comando return tem dois importantes usos. Primeiro, ele provoca a saída imediata
da função que o contém. Isso é, faz com que a execução do programa retorne ao código
chamador. Segundo, ele pode ser usado para desenvolver um valor. */

/*neste exemplo abaixo, a primeira saída[ou primeira função] ocorre quando o último comando da função 
for executado e, conceitualmente, a chave final do programa(}) é encontrada, 
[obviamente, a chave não está realmente presente no código-objeto, mas voce pode
imaginá-la como se estivesse] */

void reverse(char *s);// primeira função que retorna sem o comando return
int find_substr(char *s1,char *s2);

int main(void)
{
    char s[80]; // variavel primeira função
    char x[80]; // variavel da segunda função
    char y[80]; // variavel da segunda função
    printf("\n\t Informe a frase que deseja modificar\n\t Ela sera informada de tras pra frente ");
    gets(s);
    printf("\n\t");
    reverse(s);// chamada de função: primeira função que retorna sem o comando return
    printf("\n\n\n");
    system("pause");
        printf("\n\tInforme a frase que deseja ");
        gets(x);
        printf("\n\tInforme outra frase que deseja ");
        gets(y);
        if(find_substr(x,y)!=-1)
        printf("\n\t A substring não foi encontrada");
        
        system ("pause");
    
}

void reverse(char *s)// primeira função que retorna sem o comando return
{
     register int t;
     for(t=strlen(s)-1; t>=0; t--)
     putchar(s[t]);
}/*uma vez que a string tenha sido mostrada, não fica nada a fazer na função, de 
forma que ela retorna de onde foi chamada. Poucas funções usam esse método 
default de determinar execução. A maioria das funções adota o comando return 
para encerrar a execução, seja porque um valor deve ser devolvido seja para 
tornar o código da função mais simples e eficiente.*/

int find_substr(char *s1, char *s2)// uma função pode ter diversos comandos return.
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
                        return t; //1º retorno
     }
     printf("\n\t%s\n\n",t);
     
     return -1; //2º retorno
}

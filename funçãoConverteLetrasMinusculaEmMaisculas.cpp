// PROGRAMA DESENVOLVIDO COMENTADO POR MURILO RIBEIRO DO 2� ANO SISTEMAS DE INFORMA��O UFMS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>//IMPRIME SEU ARGUMENTO STRING EM MAI�SCULAS:
// toupper imprime seu argumento string em mai�sculas



/*Quando uma matriz � usada como um argumento para uma fun��o, seu endere�o � passado
para a fun��o. isso � uma exce��o � convers�o de C no que diz respeito a passar par�metros.
neste caso o c�digo dentro da fun��o est� operando com, e pontecialmente alterando, 
o conte�do real da matriz usadapara chamar a fun��o.
ap�s a chamada a print_upper(), o conte�do da matriz s em main(), estar� alterado
para mai�sculas.*/



void print_upper(char *string);

int main(){
    char s[80];
    printf("\n\t Informe uma Frase ");
    gets(s);
    printf("\n\t ");
    print_upper(s);
    printf("\n\n\n");
    printf("\t %s\n\n\n",s); //Com o printf, � mostrado em mai�sculas porque foi alterou matriz de strings[s].
    system("pause");        //veja o outro exemplo que ao dar printf a string[s] � mostrada em minusculas.
    
}


// Imprime uma string em Mai�sculas
void print_upper(char *string)
{
     register int t;
     for(t=0;string[t];++t)
     {
                           string[t]=toupper(string[t]);
                           putchar(string[t]);
     }
     
}

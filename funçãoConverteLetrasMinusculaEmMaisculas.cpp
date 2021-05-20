// PROGRAMA DESENVOLVIDO COMENTADO POR MURILO RIBEIRO DO 2º ANO SISTEMAS DE INFORMAÇÃO UFMS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>//IMPRIME SEU ARGUMENTO STRING EM MAIÚSCULAS:
// toupper imprime seu argumento string em maiúsculas



/*Quando uma matriz é usada como um argumento para uma função, seu endereço é passado
para a função. isso é uma exceção à conversão de C no que diz respeito a passar parâmetros.
neste caso o código dentro da função está operando com, e pontecialmente alterando, 
o conteúdo real da matriz usadapara chamar a função.
após a chamada a print_upper(), o conteúdo da matriz s em main(), estará alterado
para maiúsculas.*/



void print_upper(char *string);

int main(){
    char s[80];
    printf("\n\t Informe uma Frase ");
    gets(s);
    printf("\n\t ");
    print_upper(s);
    printf("\n\n\n");
    printf("\t %s\n\n\n",s); //Com o printf, é mostrado em maiúsculas porque foi alterou matriz de strings[s].
    system("pause");        //veja o outro exemplo que ao dar printf a string[s] é mostrada em minusculas.
    
}


// Imprime uma string em Maiúsculas
void print_upper(char *string)
{
     register int t;
     for(t=0;string[t];++t)
     {
                           string[t]=toupper(string[t]);
                           putchar(string[t]);
     }
     
}

#include<stdio.h>
#include<stdlib.h>

int main(){
	
    float n1, n2, n3, n4, media;
    
    printf("\n  Informe a nota1\n");
    scanf("%f",&n1);
    
	printf("\n  Informe a nota2\n");
    scanf("%f",&n2);
    
	printf("\n  Informe a nota3\n");
    scanf("%f",&n3);
    
	printf("\n  Informe a nota4\n");
    scanf("%f",&n4);
    
    media = (n1 + n2 + n3 + n4) / 4;
    
    printf("\n     Media = %.2f \n\n\n",media);

    system("pause");
    return 0;
}

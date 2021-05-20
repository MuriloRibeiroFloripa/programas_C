#include<stdio.h>
#include<stdlib.h>


int main (){
    
    float x,y,total;
            
    while(x != 0)
    {
    	printf("\t\t Informe Zero = 0 para parar a soma \n");	
	    printf("\t\t Informe o Valor fara ser somado ");
	    scanf("%f",&x);
	    
		total = x + total;
	}
	
	system("cls");
	printf("\n\n\t\t Soma = %.2f \n\n\n",total);
	
	system("pause");
	return 0;
}

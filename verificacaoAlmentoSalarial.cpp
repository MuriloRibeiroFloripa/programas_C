#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,s;
    printf("\n\n\t Informe o salario: ");
    scanf("%d",&x);
      
    
    
    if(x <= 2500){
       s = x * 0.3;
       s = s + x;
       printf("\n\tEsse funcionario recebera aumento de trinta porcento\n");
       printf("\n----------------------------------------------------\n");
       printf("\t   %d salario atualizado   \n",s);
       printf("----------------------------------------------------\n\n\n\n");
    }
        
    if(x > 2500 && x <= 5000){
       s=x*0.2;
       s=s+x;
       printf("\n\tEsse funcionario recebera aumento de trinta porcento\n");
       printf("\n----------------------------------------------------\n");
       printf("\t   %d salario atualizado   \n",s);
       printf("----------------------------------------------------\n\n\n\n");
    }
    
        
    if(x > 5000 ) {
       s=x*0.1;
       s=s+x;
       printf("\n\tEsse funcionario recebera aumento de trinta porcento\n");
       printf("\n----------------------------------------------------\n");
       printf("\t   %d salario atualizado   \n",s);
       printf("----------------------------------------------------\n\n\n\n");
    }
    

     
    system("pause");
    return 0;
}
    

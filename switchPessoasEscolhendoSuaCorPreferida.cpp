#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
    char ch, ch1;
    int i=1;
    
	do{
	    for(i = 1; i < 6; i++){
		    printf("\n");               
		    printf("\t\t[1].- Verde\n");
		    printf("\t\t[2].- Vermelho\n");
		    printf("\t\t[3].- Amarelo\n");
		    printf("\t\t[4].- Azul\n");
		    printf("\t\t[5].- Laranja\n");
		    printf("\t\t[6].- Roxo\n");
		    printf("\t\t[7].- Sair.-");
		    
		    printf("\n\t\tEscolha sua cor preferida: \t");
		    ch = getchar();  /*lê do teclado a seleção*/
		   	system("cls");                    
		                        
			    switch(ch){
			    	case'1':
		                printf("\n\t voce escolheu a cor verde \n\n\n\n");
		                system("pause");
		                continue;
		                 
		            case'2':
		                printf("\n\t voce escolheu a cor vermelho \n\n\n\n");
		                system("pause");
		                continue;
		
		           case'3':
		                printf("\n\t voce escolheu a cor amarelo \n\n\n\n");
		                system("pause");
		                continue;
		
		            case'4':
		                printf("\n\t voce escolheu a cor azul \n\n\n\n");
		                system("pause");
		                continue;
		
		            case'5':
		                printf("\n\t voce escolheu a cor laranja \n\n\n\n");
		                system("pause");
		                continue;
		
		            case'6':                 
		                printf("\n\t voce escolheu a cor roxo \n\n\n\n");
		                system("pause");
		                continue;
		
		            case'7':
		                exit(0);
				}
			i -= 1;
		}
	}	
	while(ch > 7);
}

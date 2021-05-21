#include<stdio.h>
#include<stdlib.h>

int main(){
	
    int x,y;
    
    printf("\n\n\t Forneça um numero x: ");
    scanf("%d",&x);
    
    printf("\n\n\t Forneça um numero y: ");
    scanf("%d",&y);
    
    if(x>y)
   		 printf("\n\n\n        x=%d Maior  ====  y=%d Menor \n\n\n",x,y);
    else
   		 printf("\n\n\n        y=%d Maior  ====  x%d Menor \n\n\n",y,x);    

    system("pause");
    return 0;
}
    

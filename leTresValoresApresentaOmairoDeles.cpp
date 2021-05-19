#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y,z;
    printf("\n\n\t Forneça um numero x:");
    scanf("%d",&x);
    printf("\n\n\t Forneça um numero y:");
    scanf("%d",&y);
    printf("\n\n\t Forneça um numero z:");
    scanf("%d",&z);
      
    
    if(x>y && x>z)
    printf("\n\n\n   %d Maior   \n\n\n\n",x);
    if(x<y && x<z)
    printf("\n\n\n   %d MENOR   \n\n\n\n",x);
    
    if(y>x && y>z)
    printf("\n\n\n   %d Maior   \n\n\n\n",y);
    if(y<x && y<z)
    printf("\n\n\n   %d MENOR   \n\n\n\n",y);
    
    if(z>x && z>y)
    printf("\n\n\n   %d Maior   \n\n\n\n",z);
    if(z<x && z<y)
    printf("\n\n\n   %d MENOR   \n\n\n\n",z);
    
    system("pause");
    return 0;
}
    

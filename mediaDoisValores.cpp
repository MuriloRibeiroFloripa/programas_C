#include<stdio.h>
#include<stdlib.h>

int main(){
    float x, y, media;
    
    printf("\n  Informe o numero x: ");
    scanf("%f",&x);
    
    printf("\n  Informe o numero y: ");
    scanf("%f",&y);
    
    media=(x+y)/2;
    
    printf("\n x = %.2f y = %.2f \n media = %.2f \n\n\n",x,y,media);
    system("pause");
    
    return 0;
}

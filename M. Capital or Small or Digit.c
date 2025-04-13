#include<stdio.h>
int main(){
    char X;
    int Y;
    scanf("%c",&X);
    Y=("%d",X);
    if (Y<58)
    {
        printf("IS DIGIT\n");
    }
    
    else if(Y<91){
       
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }
    else{
       
        printf("ALPHA\n");
        printf("IS SMALL\n");
    }
    
    return 0;
}
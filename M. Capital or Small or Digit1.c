#include<stdio.h>
int main(){
    char X;
    int Y;
    scanf("%c",&X);
    Y=("%d",X);
    if (Y>='0'&&Y<='9')
    {
        printf("IS DIGIT\n");
    }
    else{
       
        printf("ALPHA\n");
        if (Y>='a'&&Y<='z')
        {
            printf("IS SMALL");
        }
        else{
            printf("IS CAPITAL");
        }
        
    }
    
    return 0;
}
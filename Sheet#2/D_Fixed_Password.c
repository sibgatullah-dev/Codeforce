#include<stdio.h>
int main(){
    int X = 1999;
    int p ;
    while( scanf("%d",&p) != EOF){
       
        if (p==X)
        {
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    
        
    }
    return 0;
}
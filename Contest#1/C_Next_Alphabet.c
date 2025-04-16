#include<stdio.h>
int main(){
    char c ;
    scanf("%c",&c);
    if(c==122){
        c=97;
        printf("%c",c);
    }else{
        printf("%c",c+1);
    }
    
    return 0;
}
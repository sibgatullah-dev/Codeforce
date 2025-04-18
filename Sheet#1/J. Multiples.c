#include<stdio.h>
int main(){
    int A,B,temp;
    scanf("%d %d",&A,&B);
    temp = A;
    if (A<B)
    {
        A=B;
        B=temp;
    }
    
    if (A%B==0)
    {
        printf("Multiples");
    }
    else{
        printf("No Multiples");
    }
    
    return 0;
}
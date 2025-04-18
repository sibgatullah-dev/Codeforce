#include <stdio.h>
int main(){
    int X;
    scanf("%d",&X);
    int n;
    while(X>0){
        int digit = X%10;
        X /= 10;
        n=digit;
    }
    if (n%2==0)
    {
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    
    return 0;
}
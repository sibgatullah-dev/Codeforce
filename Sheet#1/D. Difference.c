#include<stdio.h>
int main(){
    long long int A,B,C,D;
    scanf("%lld %lld %lld %lld",&A,&B,&C,&D);
    long long int diff = (A*B)-(C*D);
    printf("Difference = %lld",diff);
    return 0;
}
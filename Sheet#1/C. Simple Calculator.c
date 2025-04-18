#include<stdio.h>
int main(){
    long long int X ,Y;
    scanf("%lld %lld",&X,&Y);
    long long int sum , div, multi;
    sum = X + Y;
    multi = X*Y;
    div=X-Y;

    printf("%lld + %lld = %lld\n",X,Y,sum);
    printf("%lld * %lld = %lld\n",X,Y,multi);
    printf("%lld - %lld = %lld\n",X,Y,div);

    return 0;
}
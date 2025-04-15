#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i = 1; i<=12;i++){
        long long int mult = N * i;
        printf("%d * %d = %lld\n",N,i,mult);
    }
    return 0;
}
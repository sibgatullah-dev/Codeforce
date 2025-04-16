#include<stdio.h>
int main(){

    int N;
    scanf("%d",&N);
    for(int i = 1 ; i<=N; i++){
        int n ;
        scanf("%d",&n);
        long long int factorial=1;
        for(int j =1;j<=n;j++){
            factorial *=j;
            
        }
        printf("%lld\n",factorial);
    }

  
    return 0;
}
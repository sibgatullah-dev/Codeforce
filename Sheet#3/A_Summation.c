#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int A[N];
    long long sum =0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
        sum += A[i];
    }
    if (sum<0)
    {
        sum = -(sum);
    }
    
    printf("%lld",sum);
    
    
    return 0;
}
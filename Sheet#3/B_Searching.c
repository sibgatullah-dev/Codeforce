#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    
    int A[N];
    for (int i = 0; i < N; i++){
        scanf("%d",&A[i]);
    }

    int X;
    scanf("%d",&X);
    
    for (int i = 0; i < N; i++)
    {
        if (A[i]==X)
        {
            printf("%d",i);
            return 0;
        }
        
    }

    printf("-1");
    return 0;
}
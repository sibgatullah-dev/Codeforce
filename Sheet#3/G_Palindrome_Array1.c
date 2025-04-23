#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int A[N];
    int B[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }
    for (int i = N-1,j=0; i >= 0; i--,j++)
    {
         B[j] = A[i];
    }

    int p = 1;
    for (int i = 0; i < N; i++)
    {
        if (A[i]!=B[i])
        {
            p = 0;
        }
        
    }
    
    if (p == 1)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}
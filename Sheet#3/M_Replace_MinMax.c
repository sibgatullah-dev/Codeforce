#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }

    int min = 1000000,minidx=0;
    int max = -1000000,maxidx=0;
    int temp;
    
    for(int i =0;i<N;i++){
        if (min>A[i])
        {
            min = A[i];
            minidx=i;
        }
        if (max<A[i])
        {
            max = A[i];
            maxidx=i;
        }
    }
    
    temp = A[minidx];
    A[minidx]=A[maxidx];
    A[maxidx]= temp;
            

    for (int i = 0; i < N; i++)
    {
        printf("%d ",A[i]);
    }

    return 0;
}
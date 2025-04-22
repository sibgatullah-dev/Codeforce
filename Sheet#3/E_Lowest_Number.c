#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int A[N];
    int j ;
    int low = 1000000000;
    for(int i = 1;i<=N;i++){
        scanf("%d",&A[i]);
        if (A[i]<low)
        {
            low = A[i];  
            j = i;

        }
           
    }
    printf("%d ",low);
    printf("%d ",j);
  

    return 0;
}
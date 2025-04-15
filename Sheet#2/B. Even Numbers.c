#include<stdio.h>
int main(){
    int N ,even;
    scanf("%d",&N);
    even = 0;
    for(int i =1 ;i<=N;i++){
        if (i%2==0)
        {
            printf("%d\n",i);
            even = 1;
        }
        
    }
    if (even==0)
    {
        printf("-1");
    }
    
    return 0;
}
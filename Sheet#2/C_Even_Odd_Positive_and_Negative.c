#include<stdio.h>
int main(){
    int N ;
    scanf("%d",&N);
    int even=0,odd=0;
    int pos=0,neg=0;
   for(int i=1;i<=N;i++){
    int x;
    scanf("%d",&x);
    if (x%2==0)
    {
        even++;
    }
    else{
        odd++;
    }
    if(x>0){
        pos++;
    }
    else if (x < 0){
        neg++;
    }
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);
    return 0;
}
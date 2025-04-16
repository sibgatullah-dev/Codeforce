#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    for(int j = 1; j<=T;j++){
        int X,Y;
        scanf("%d %d", &X, &Y);
        int sum = 0;
        
        if(X>Y){
            int Z = X;
            X=Y;
            Y=Z;
        }
        for(int i = X+1;i<Y;i++){
            if(i%2!=0){
                sum +=i;
            }
        }
        printf("%d\n",sum);
    }
   
    
    return 0;
}
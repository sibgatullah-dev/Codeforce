#include<stdio.h>
#include<limits.h>
int main(){
    int N;
    scanf("%d",&N);
    int num;
    int max = INT_MIN;// if we use INT_MIN then it will give use the smallest int number
    for(int i = 1;i<=N;i++){
        scanf("%d",&num);
        if(num>max){
            max = num;
        }
    }
    printf("%d",max);
    return 0;
}
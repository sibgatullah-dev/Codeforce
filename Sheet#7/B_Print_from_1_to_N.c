#include<stdio.h>

void num(int n,int i){
    printf("%d\n",i);
    if (i == n)
    {
        return;
    }
    num(n,i+1);
}

int main(){
    int n;scanf("%d",&n);
    int i = 1;
    num(n,i);
    return 0;
}
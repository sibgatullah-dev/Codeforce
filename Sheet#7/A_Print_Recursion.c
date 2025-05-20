#include<stdio.h>

void recursion(int n,int i){
    
    printf("I love Recursion\n");
    if (i == n)
    {
        return;
    }
    recursion(n,i+1);
    
}

int main(){
    int n;scanf("%d",&n);
    int i = 1;
    recursion(n,i);
    return 0;
}
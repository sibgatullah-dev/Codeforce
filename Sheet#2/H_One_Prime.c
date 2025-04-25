#include<stdio.h>
int main(){
    int x;scanf("%d",&x);
    if (x<=1)
    {
        printf("NO");
        return 0;
    }
    int a = x/2;
    int token = 1; 
    for (int i = 2; i <= a; i++)
    {
        if (x%i==0)
        {
            token = 0;
        }    
    }
    if (token == 0)
    {
        printf("NO");
    }else{
        printf("YES");
    }
    
    return 0;
}
#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    for (int i = 2; i <= n; i++)
    {
        int token = 1;
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            {
               token = 0;
    
            } 
        }
        if (token)
        {
            printf("%d ",i);
        }  
    }
    return 0;
}
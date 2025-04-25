#include<stdio.h>
int main(){ 
    char x;scanf("%c",&x);
    int t;scanf("%d",&t);
    for (int tc = 1; tc <= t; tc++)
    {
        int n;scanf("%d",&n);
        for (int i = 1; i <= n; i++)
        {
            printf("%c",x);
        }
        printf("\n");
    } 
    return 0;
}
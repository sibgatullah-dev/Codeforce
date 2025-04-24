#include<stdio.h>
int main(){
    int t;scanf("%d",&t);
    for (int tc = 1; tc <= t; tc++)
    {
        int width,height ;
        scanf("%d %d",&width,&height);
        if (height==width)
        {
            printf("Square\n");
        }else{
            printf("Rectangle\n");
        }
    }
    
    return 0;
}
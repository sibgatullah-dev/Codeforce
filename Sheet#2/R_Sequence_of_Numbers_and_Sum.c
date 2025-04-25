#include<stdio.h>
int main() {
    int m,n;
    while (1)
    {
        scanf("%d %d",&m,&n);
        if (m<=0||n<=0)
        {
            break;
        }

        int first,second;
        if (m<n)
        {
             first = m;
             second = n;
        }else{
             first = n;
             second = m ;
        }

        int sum =0;
        for (int i = first ; i <= second; i++)
        {
            printf("%d ",i);
            sum+=i;
        }
        printf("sum =%d\n",sum);   
    }
    
    return 0;
}
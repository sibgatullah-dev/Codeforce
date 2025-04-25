#include<stdio.h>
int main(){
    int n,r,o,reverse;
    scanf("%d",&n);reverse=0;o=n;

     while (n>0)
    {
        r=n%10;
        reverse = reverse*10+r;
        n/=10;
    }

    printf("%d\n",reverse);
    if(o==reverse){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
  
    
    return 0;
}
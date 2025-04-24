#include<stdio.h>
int main(){
    char s[1000001];
    scanf("%s",s);
    int len = strlen(s);
    int count=0;
    for (int i = 0; i < len ; i++)
    {
        count = count +(s[i]-48);
    }
    printf("%d",count);
    
    return 0;
}
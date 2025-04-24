#include<stdio.h>
int main(){
    char s[100001];
    scanf("%s",&s);
    for (int i = 0; s[i]!='\0' ; i++)
    {
        if (s[i]==',')
        {
            s[i]=' ';
        }
        else if (s[i]<91)
        {
            s[i]+=32;
        }
        else if (s[i]>96)
        {
            s[i]-=32;
        }
        
        printf("%c",s[i]);
    }
    
    return 0;
}
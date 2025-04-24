#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);

    for (int i = 1; i <= t; i++)
    {
        char s[101];
        scanf("%s",&s);
        int len = strlen(s);
    
        if (len<=10){
            printf("%s\n",s);
        }else if (len>10)
        {
            int mid = len-2;
            char l=s[0];
            char r=s[len-1];
            printf("%c%d%c\n",l,mid,r);    
        }
    }
    return 0;
}
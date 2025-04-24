#include<stdio.h>
int main(){
    char s[1001];
    scanf("%s",&s);
    int len = strlen(s);
    int l = 0,r = len-1;
    int p = 1;
    while (l<r)
    {
        if (s[l]!=s[r])
        {
            p = 0;
        }
        l++;
        r--; 
    }
    if (p==0)
    {
        printf("NO");
    }else{
        printf("YES");
    } 
    return 0;
}
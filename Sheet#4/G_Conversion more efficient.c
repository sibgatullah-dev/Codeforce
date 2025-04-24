#include<stdio.h>
int main()
{
    char s[100001];
    scanf("%s",&s);
    for (int i=0;s[i]!='\0';i++)
    {
        int d=s[i];
 
        if(s[i]==',')
        {
            s[i]=' ';
        }

        else if(d<=90 && d>=65)
        {
            d+=32;
            s[i]=d;
        }
        else if(d<=122 && d>=97)
        {
            d-=32;
            s[i]=d;
        }
    }

    printf("%s",s);

    return 0;
}
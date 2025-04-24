#include<stdio.h>
#include<string.h>
int main(){

    char a[11];scanf("%s", a);
    char b[11];scanf("%s", b);
    char c[22];

    int lenA= strlen(a);
    int lenB= strlen(b);
    strcpy(c,a);
    strcat(c,b);
    printf("%d",lenA);
    printf(" ");
    printf("%d\n",lenB);
    printf("%s\n",c);
    printf("%s",a);
    printf(" ");
    printf("%s\n",b);
}
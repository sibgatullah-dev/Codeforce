#include<stdio.h>
#include<string.h>
int main(){

    char a[11];scanf("%s", a);
    char b[11];scanf("%s", b);
    
    int lenA= strlen(a);
    int lenB= strlen(b);

    char c[lenA+lenB+1];

    for (int i = 0; i < lenA; i++)
    {
        c[i]=a[i];
    }
    for (int i = 0; i < lenB; i++)
    {
        c[i+lenA]=b[i];
    }
    c[lenA + lenB] = '\0';
    printf("%d %d\n",lenA,lenB);
    printf("%s\n",c);
    char temp= a[0];
    a[0]=b[0];
    b[0]=temp;
    printf("%s %s\n",a,b);
       
}
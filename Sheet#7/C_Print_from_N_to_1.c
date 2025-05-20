#include <stdio.h>

void num(int n) {
    if (n == 0){
       return; 
    }           
    printf("%d", n);              
    if (n > 1){
        printf(" "); 
    }       
    num(n - 1);       
}

int main() {
    int n;
    scanf("%d", &n);
    num(n);
    return 0;
}

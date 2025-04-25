#include <stdio.h>

int the(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d\n", the(A, B));
    return 0;
}



// Function to find GCD using Euclidean algorithm
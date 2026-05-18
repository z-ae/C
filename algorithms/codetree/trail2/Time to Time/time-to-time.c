#include <stdio.h>

int A, B, C, D;

int main() {
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    // Please write your code here.
    printf("%d", C * 60 + D - A * 60 - B);
    
    return 0;
}
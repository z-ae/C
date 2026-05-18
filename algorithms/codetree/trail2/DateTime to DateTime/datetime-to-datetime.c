#include <stdio.h>

int main() {
    // Please write your code here.
    int a = 0, b = 0, c = 0;

    scanf ("%d %d %d", &a, &b, &c);

    int base_time   = 11 * 1440 + 11 * 60 + 11;
    int target_time = a * 1440 + b * 60 + c;
    int diff_minutes = target_time - base_time;
    
    if (diff_minutes < 0){
        printf("-1"); 
        return 0;
    }
    printf("%d", diff_minutes);
    return 0;
}
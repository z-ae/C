#include <stdio.h>

int main() {
    // Please write your code here.

    int days_of_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m1 = 0, d1 = 0, m2 = 0, d2 = 0;
    int days_1 = 0, days_2 = 0;

    scanf("%d %d %d %d ", &m1, &d1, &m2, &d2);

    days_1 = d1; days_2 = d2;
    for (int i = 0; i < m1; i++){
        days_1 += days_of_month[i];
    }
    for (int i = 0; i < m2; i++){
        days_2 += days_of_month[i];
    }

    printf("%d", days_2 - days_1);
    return 0;
}
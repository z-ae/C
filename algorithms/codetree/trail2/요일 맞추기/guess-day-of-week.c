#include <stdio.h>
#include <stdlib.h>

int get_days(int month, int day){
    int day_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = day;

    for (int i = 0; i < month - 1; i++){
        days += day_in_month[i];
    }
    return days;
}

int main() {
    // Please write your code here.
    int m1, m2, d1, d2;
    char day_name[7][4] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);

    // 몇 일 차이나는지
    int base_days =  get_days(m1, d1);
    int target_days =  get_days(m2, d2);
    int diff_days = target_days - base_days;

    // 요일 점프
    if (diff_days >= 0){
        printf("%s", day_name[diff_days % 7]);
    }
    else{
        printf("%s", day_name[7 + diff_days % 7]);
    }

    return 0;
}
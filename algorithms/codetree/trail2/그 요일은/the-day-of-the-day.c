#include <stdio.h>
#include <string.h>

// 1월 1일 부터 m월 d일까지 지난 일 수
int get_days(int m, int d){
    int d_in_m[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = d;

    for (int i = 0; i < m - 1; i++){
        days += d_in_m[i];
    }
    return days;
}

// A요일의 인덱스 구하기 ex) 화요일의 인덱스 : 1.
int get_idx_day(char* day){
    char day_name[7][4] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"}; 
    int idx = 0;

    while (strcmp(day, day_name[idx])){
        idx++;
    }

    return idx;
}

int main() {
    // Please write your code here.
    int m1, m2, d1, d2;
    char day[4] = {0};

    scanf("%d %d %d %d %s", &m1, &d1, &m2, &d2, &day);

    int base_days = get_days(m1, d1);           
    int target_days = get_days(m2, d2);
    int diff_days = target_days - base_days + 1;    // m1.d1 ~ m2.d2 사이 기간

    int idx_day = get_idx_day(day);
    int count = 0;
    int left_days = diff_days - idx_day - 1;            // 첫 번째 A요일 이후 남은 기간

    // A요일 몇 번 등장하는지 구하기
    if (left_days < 0){
        count = 0;
    }
    else if (left_days == 0){
        count = 1;
    }
    else{
        count = (left_days / 7) + 1;              
    }

    //printf("%d - %d = %d\n", target_days, base_days, diff_days);
    //printf("%d\n", left_days);
    printf("%d", count);

    return 0;
}
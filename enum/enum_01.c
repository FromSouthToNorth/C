//
// Created by bw on 2022/5/5.
//

#include <stdio.h>

enum WeekDay {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

void select_weekday(enum WeekDay weekDay);

int main() {

    enum WeekDay day;

    for (day = Monday; day <= Sunday; day++) {
        printf("enum WeekDay element: %d \n", day);
    }

    day = Tuesday;
    select_weekday(day);
    return 0;
}

void select_weekday(enum WeekDay weekDay) {
    switch (weekDay) {
        case 0:
            printf("Monday\n");
            break;
        case 1:
            printf("Tuesday\n");
            break;
        case 2:
            printf("Wednesday\n");
            break;
        case 3:
            printf("Thursday\n");
            break;
        case 4:
            printf("Friday\n");
            break;
        case 5:
            printf("Saturday\n");
            break;
        case 6:
            printf("Sunday\n");
            break;
        default:
            printf("wrong input !\n");
    }
}
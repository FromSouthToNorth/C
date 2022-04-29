//
// Created by bw on 2022/4/28.
//

#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct Students {
    int age;
    char sex;
    float score;
    char name[60];
};

void InputStudent(struct Students *students);

void OutputStudent(const struct Students *students);

int main() {
    struct Students students;
    printf("%llu\n", sizeof(students));
    InputStudent(&students);
    OutputStudent(&students);
    return 0;
}

void InputStudent(struct Students *students) {
    students->age = 10;
    strcpy(students->name, "liSi");
    students->score = 98.2F;
    students->sex = 'F';
}

void OutputStudent(const struct Students *students) {
    printf("name: %s\nage: %d\nscore: %.2f\nsex: %c\n", students->name, students->age, students->score, students->sex);
}
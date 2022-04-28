//
// Created by bw on 2022/4/27.
//

#include <stdio.h>
#include <malloc.h>

struct Student {

    int age;

    float score;

    char sex;

};

int main() {

//    int age;
//    float score;
//    char sex;
    struct Student s = {23, 87.5F, 'F'};
    printf("%d, %f, %c\n", s.age, s.score, s.sex);

    struct Student s2;
    s2.age = 22;
    s2.score = 85.6F;
    s2.sex = 'F';
    printf("%d, %f, %c\n", s2.age, s2.score, s2.sex);

    struct Student *p = malloc(sizeof(struct Student));
    p->age = 23;
    p->sex = 'M';
    p->score = 88.9F;
    printf("%d, %f, %c\n", p->age, p->score, p->sex);

    return 0;
}
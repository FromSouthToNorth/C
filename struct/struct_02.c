//
// Created by bw on 2022/4/28.
//

#include <stdio.h>
#include <malloc.h>

struct Students {
    int age;
    float score;
    char sex;
};

int main() {

    int i;
    struct Students stu[5];
    for (i = 0; i < 5; ++i) {
        scanf("age: %d", &stu[i].age);
    }

    return 0;
}
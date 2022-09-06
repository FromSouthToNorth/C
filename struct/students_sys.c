//
// Created by bw on 2022/5/5.
//
#include <stdio.h>
#include <stdlib.h>


struct Students {
    char name[10];
    int age;
    float score;
};

void input_students(struct Students *s, int size);
void sort_student_by_score(struct Students *s, int size);
void bubble_sort(struct Students *s, int size);
void insertion_sort(struct Students *s, int size);
void swap(struct Students *s, int i, int j);

int main() {
    int n;
    printf("input students size:\n");
    scanf("%d", &n);
    struct Students *students = (struct Students *)malloc(sizeof(struct Students));
    input_students(students, n);
    sort_student_by_score(students, n);

    printf("========================\n");
    printf("sort:\n");
    for (int i = 0; i < n; ++i) {
        printf("top [%d]students info , name: %s, age: %d, score: %.2f \n", i, students[i].name, students[i].age, students[i].score);
    }
    return 0;
}

void input_students(struct Students *s, int size) {
    for (int i = 0; i < size; ++i) {
        printf("top [%d] students\"name\": \n", i);
        scanf("%s",s[i].name);
        printf("top [%d] students\"age\": \n", i);
        scanf("%d", &s[i].age);
        printf("top [%d] students\"score\": \n", i);
        scanf("%f", &s[i].score);
    }

    printf("input data source\n");
    for (int i = 0; i < size; ++i) {
        printf("top [%d]students info , name: %s, age: %d, score: %.2f \n", i, s[i].name, s[i].age, s[i].score);
    }
}

void sort_student_by_score(struct Students *s, int size) {
    /**
     * 冒泡排序
     */
//    bubble_sort(s, size);
    /**
     * 插入排序
     */
    insertion_sort(s, size);
}

void bubble_sort(struct Students *s, int size) {
    int i, j;
    for (i= 0; i < size; ++i) {
        for (j = 0; j < size - i - 1; ++j) {
            if (s[j].score > s[j + 1].score) {
                swap(s, j , j + 1);
            }
        }
    }
}

void insertion_sort(struct Students *s, int size) {
    int i, j;
    for (i = 0; i <= size; ++i) {
        for (j = i; j > 0 && (s[i].score < s[j - 1].score); --j) {
            swap(s, j, j - 1);
        }
    }
}

void swap(struct Students *s, int i, int j) {
    struct Students t = s[i];
    s[i] = s[j];
    s[j] = t;
}




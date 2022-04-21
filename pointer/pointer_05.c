//
// Created by bw on 2022/4/21.
//
#include <stdio.h>

int main() {

    char ch = 'A';
    char* c = &ch;

    int num = 10;
    int* i = &num;

    double db = 24.12321;
    double* d = &db;

    double dbs[2] = { 1.23,23 };
    double* d2 = dbs;

    printf("char* sizeof %llu \n", sizeof c);
    printf("int* sizeof %llu \n", sizeof i);
    printf("double* sizeof %llu \n", sizeof d);
    printf("double[]* sizeof %llu \n", sizeof d2);

    return 0;
}
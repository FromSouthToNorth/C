//
// Created by bw on 2022/4/22.
//

#include <stdio.h>
#include <malloc.h>

int main() {

    int length;
    int *array;
    printf("input array length: \n");
    scanf("%d", &length);
    array = (int *) malloc(sizeof(int) * length);

    int i;
    for (i = 0; i < length; ++i) {
        printf("input array[%d] element: \n", i + 1);
        scanf("%d", &array[i]);
    }

    printf("array element: \n");
    for (i = 0; i < length; i++) {
        printf("array[%d]:\t%d \n", i + 1, array[i]);
    }

    free(array);

    return 0;

}



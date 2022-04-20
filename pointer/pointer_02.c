//
// Created by bw on 2022/4/19.
//

#include <stdio.h>

int main() {

    int *p; /* p 是变量的名字， int * 表示 p 变量存放的是 int 类型变量的地址 */
    int var_num = 3;
    printf("var_num: %d \n", var_num);   // 3
    printf("&var_num: %p \n", &var_num); // 0000000000xxxxxx

    /**
     * <p>p 保存了 var_num 的内存地址，因此 p -> var_num<p/>
     * <p>p 不是 var_num, var_num 也不是 p: 修改 p 和 var_num 的值互不影响<p/>
     * <p>如果一个指针变量 -> 某个普通变量，则 *指针变量就完全等同于 普通变量<p/>
     * 示例：
     *  如果 p 是个指针变量，并且存放了普通变量的 var_num 的地址
     *  则 p -> 普通变量 var_num
     *  或者说: 在所有出现 *p 的地方可以替换成 var_num
     *         在所有出现 var_num 的地方都可以替换成 *p
     * --------------------------------------------------------------
     * int var_num = 3;
     * int *p;
     * p = &var_num;
     *
     *       p              指针指向变量       变量名称
     * 0000000000xxxxxx --------                 ↓
     *        ↑                |                 3   ← 标量值
     * 指针变量的地址             -------->  0000000000xxxxxx
     *                                           ↑
     *                                        变量地址
     *
     * 1) p 是一个指针
     * 2) 指针 p 的类型必须与变量 var_num 的类型一致，因为整形的指针
     *    只能存储整型的指针地址
     * --------------------------------------------------------------
     */
    p = &var_num;
    printf("p: %p \n", p); // 0000000000xxxxxx

    *p = 6;
    printf("*p: %d \n", *p);            // 6
    printf("var_num: %d \n", var_num);  // 6


    var_num = 12;
    printf("*p: %d \n", *p);            // 12
    printf("var_num: %d \n", var_num);  // 12

    return 0;

}

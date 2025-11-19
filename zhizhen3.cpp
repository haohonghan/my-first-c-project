#include <stdio.h>

int main() {
    int a[][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int (*p)[3] = a; // p是一个指向长度为3的整型数组的指针

    printf("%zu\n", sizeof(a));     // 行 1
    printf("%zu\n", sizeof(p));     // 行 2
    
    printf("%d\n", **a);            // 行 3
    printf("%d\n", **p);            // 行 4
    printf("%d\n", *(*(a + 1)));    // 行 5
    printf("%d\n", *(*(p + 1) + 2));// 行 6
    
    printf("%d\n", *(a[1] + 1));    // 行 7
    printf("%d\n", (*p)[2]);        // 行 8
    
    p++;
    printf("%d\n", **p);            // 行 9

    return 0;
}

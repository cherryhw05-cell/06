// 06주차 프로그래밍 실습
#include <stdio.h>

// 실습03

// 두 정수의 덧셈
int sumTwo(int a, int b) {
    return (a + b);
}

// 정수의 제곱
int square(int n) {
    return n * n;
}

// 정수의 대소 비교
int get_max(int x, int y) {
    if (x > y)
        return x;
    return y;
}

int main(void) {
    printf("sumTwo result : %d\n", sumTwo(2, 5));
    printf("square result : %d\n", square(10));
    printf("get_max result : %d\n", get_max(2, 5));

    return 0;
}
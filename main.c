// 06주차 프로그래밍 실습
#include <stdio.h>

// 실습02
void func(void) {
    int x;
    printf("func x is at %p\n", &x);
}

int main(void) {
    int x;
    printf("main x is at %p\n", &x);
    func();

    return 0;
}

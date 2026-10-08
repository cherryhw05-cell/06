// 06주차 프로그래밍 실습
#include <stdio.h>

// 실습04
int square (int a) {
    return (a*a); // return 반환 필수, void는 반환값 없으므로 int로 수정해야함
}

int main() {
    int a = 2;
    a = square(a);
    printf("a = %i\n", a);
}
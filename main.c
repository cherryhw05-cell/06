// 06주차 프로그래밍 실습
#include <stdio.h>

// 실습05
int factorial(int n) {
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int combination(int n, int r) {
    int up, down; // 분자 up, 분모 down 계산

    up = factorial(n);
    down = factorial(r) * factorial(n - r);
    return up / down;
}

int main(void) {
    int result;
    int n, r;

    // 입력 받기
    printf("input n : ");
    scanf("%d", &n);
    
    printf("input r : ");
    scanf("%d", &r);

    result = combination(n, r);

    printf("The combination result is %d\n", result);
}


#include <stdio.h>

int main() {
    int age;
    float height;

    // 사용자에게 입력을 요청합니다.
    printf("나이를 입력하세요: ");
    scanf("%d", &age); // 정수를 입력받을 때는 %d를 사용합니다.

    printf("키를 입력하세요 (cm): ");
    scanf("%f", &height); // 실수를 입력받을 때는 %f를 사용합니다.

    // 입력받은 값을 출력합니다.
    printf("\n당신의 나이는 %d살이고, 키는 %.1fcm입니다.\n", age, height);

    return 0;
}

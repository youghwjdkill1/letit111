/*
파일명 : ex15-04-function.c
*/

#include <stdio.h>

// 입력(매개변수) 값과 반환(return)값이 모두 없는 함수
void guide(void)
{
    printf("inputNumber 함수를 통해 정수를 입력할 수 있습니다. \n");
    printf("또한 printNumber 함수를 통해 입력한 정수를 출력할 수도 있습니다.");
}

// 입력값만 존재하는 경우
void pritnNumber(int num)
{
    printf("당신이 입력한 정수는 %d 입니다. \n", num);

}

// 반환값만 존재하는 경우
int inputNumber(void)
{
    int num;
    printf("정수를 입력해 주세요: ");
    scanf("%d", &num);

    return num;
}

int main(void)
{
    guide();
    int num = inputNumber();    // 정수형 갑 입력
    pritnNumber(num);

    return 0;
}
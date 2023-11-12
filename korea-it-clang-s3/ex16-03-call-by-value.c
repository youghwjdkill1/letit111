/*
파일명 : exx16-02-call-by-value.c

call by value
    기본형태 변스 매개변수, 실제 값 전달
*/

#include <stdio.h>

void swapNumber(int num1, int num2)
{
    // 변수 swap 코드
    int temp = num1;
    num1 = num2 ;
    num2 = temp;

    printf("함수 안에서 확인한 결과, num1: %d num2 %d\n", num1, num2);
    
}

int main(void)
{
    int number1 = 33, number2 = 99;

    swapNumber(number1, number2);
    printf("함수 호출 완료후 환인한 결과, number1: %d number2: %d\n", number1, number2);

    return 0;
}

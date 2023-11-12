/*
파일명 : ex15-01-function.c

함수(cunction)란?
    프로그래밍에서 함수(function) 은
    하나의 특별한 목적의 작업을 수행하기 위해
    독립적으로 설계된 프로그램 코드이 집합


리턴타입 함수명(매개변수타입 매개변수명)
{
    실행한 코드 집합

    return 리턴값;
}

*/

#include <stdio.h>

// 사용자 정의 함수의 선언
int add(int a, int b)
{
    printf("add 함수 실행! \n");

    return a + b;

}

int main(void)
{
    int result;

    // 사용자 저의 함수 호출
    result = add(3, 5);
    printf("하수가 반환한 값 : %d\n", result);

    return 0;

}
/*
파일명: ex07-01-conditional.c

조건문
    조건식의 결과에 따라 별도의 명령을 수행하도록 제어하는 코드

1-1 if문

    if(조건)
    {
        조건이 참일 경우 실행코드
    }

    if(조건)
        실행코드; (코드가 하나일 경우)

1-2 if ~ else 문
    if(조건)
    {
        조건이 참일 경우 실행코드
    }
    else 
    {
        조건이 거짓일 경우 실행코드
    }

1-3 if ~ else if ~ else 문
    if(조건1)
    {
        조건1 참일 경우 실행코드
    } 
    else if(조건2)
    {
        조건2 참일 경우 실행코드
    }
    else
    {
        모든 조건들이 거짓일 경우 실행코드
    }
*/

#include <stdio.h>

int main(void)
{
    // 1-1 if문
    int num = 3;
    if(num < 3) 
        printf("num is small than 3\n");
    
    if(num == 3) 
        printf("num is 3!\n");

    if(num > 3)
        printf("num is bigger than 3!\n");

    // 1-2 if ~ else문
    char alpha = 'A';

    if(alpha == 'B')
        printf("alpha is B.\n");
    else 
        printf("alpha is not B.\n");


    // 1-3 if ~ else if ~ else 문
    int score = 75;

    if(score > 90)
        printf("A 입니다.\n");
    else if(score > 80)
        printf("B 입니다.\n");
    else if(score > 70)
        printf("C 입니다.\n");
    else if(score > 60)
        printf("D 입니다.\n");
    else 
        printf("F 입니다.\n");

    return 0;
}










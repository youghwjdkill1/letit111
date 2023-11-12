/*
파일명 : ex15-07-static.c

static 뱐수(정적변수)
    할수내부(지역) 힘수외부(전역)에서도 사용가능
    프로그램
*/

#include <stdio.h>

int gNumber = 10;

void increaseNumber()
{
    static int number = 0;  // static 전역변수 number 선언

    number++;
    printf("number: %d\n", number);

}

int main(void)
{
    increaseNumber();
    increaseNumber();
    increaseNumber();
    increaseNumber();
    increaseNumber();

    return 0;
}
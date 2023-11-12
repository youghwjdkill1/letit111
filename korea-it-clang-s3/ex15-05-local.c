/*
파일명 : ex15-05-local.c

지역변수 
    특정지역({}코드블럭) 내에서만 사용가능한 변수
    매개변수도 지역변의 일종이다.
*/

#include <stdio.h>

int localfunc(int num)
{
    int result = 0;
    return result + num;
}

int main(void)
{
    int num = 5;
    int result = localfunc(num);

    printf("결과: %d\n", result);

    return 0;
}
/*
파일명 : ex14-01-memory.area.c

코드 영역
    메모지의 코드 영역은 실행프로그램 코드가 저장되는 영역
    CPU는 코드 영역에 저정된 명령어를 하나씩 가져와 처리

데이터 영역 
    전역변수와 정적(static) 변가 저장되는 영역
    프로그램 시작과 함꼐 할당되며, 프로그램 종료되면 소명

스택 영역
    함수 호출과 관계되는 지역변수와 매개변수가 저장되는 영역
    함수 호출과 함께 할당되며, 함수 호출이 완료되면 소멸하낟.

    스택은 후입선출(LIFO, Last-In FIRST-OUT) 방식에 따라 동작
    가장 늦게 저징된 데이터가 가장 먼저 인출된다.

힘 영역
    사용자가 직접관리할 수 있는 메모리 영역
    힙영역은 사요앚에 의해 메모지 공간이 동적으로 할당되고 해제된다.


*/

#include <Stdio.h>

int outer = 10;     // 전역 변수.

int main(void)
{
    int inner = 3;  // 지역 변수
    printf("inner: %d\n", inner);

    inner++;
    printf("outer: %d\n", outer);

    return 0;
}
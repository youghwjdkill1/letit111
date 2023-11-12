/*
파일명 : ex17-01-double-pointer.c

포인터 변수
    메모지에 주소값을 저장하는 변수

더블포인터 변수
    포인터 변수의 주소값을 저장하는 변수
    포인터의 포인터변수
*/

#include <stdio.h>

int main(void)
{
    int num = 3;
    int *ptr = &num;
    int **dptr = &ptr;
    int *ptr2;

    printf("num 주소값 : %p\n", &num);
    printf("ptr 주소값 : %p\n", &ptr);
    printf("dptr 주소값: %p\n", &dptr);
    printf("dptr2 주소값: %p\n", &ptr2);

    ptr2 = *dptr;
    *ptr2 = 9;
    printf("dptr2 주소값: %p\n", &ptr2);

    printf("%d %d\n", num, **dptr);

    return 0;
}
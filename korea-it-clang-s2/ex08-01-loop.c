/*
파일명: ex08-01-loop.c

반복문
    특정한 부분의 코드가 반복적으로 수행될 수 있도록 하는 구문

1. while 문
    while(조건)
    {
        반복 수행될 코드
    }
*/
#include <stdio.h>

int main(void)
{
    int num = 0;
    /*
    num = 3
    printf - num is 0 now
    printf - num is 1 now
    printf - num is 2 now
    printf - End While - num is 3 now
    */
   
    // while (num < 3) 
    // {
    //     printf("num is %d now\n", num);
    //     num++;                         
    // }

    // printf("End While - num is %d now\n", num);

    int num2 = 0;
    while (num2 != -1)
    {
        printf("숫자를 입력하세요(-1 입력시 종료): ");
        scanf("%d", &num2);

        if(num2 == -1)
            printf("종료합니다.\n");
        else 
            printf("%d을(를) 입력하셨네요.\n", num2);
    }

    
    return 0;
}
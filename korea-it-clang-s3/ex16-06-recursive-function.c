/*
파일명 : ex16-06-recursive-function.c
*/

#include <stdio.h>

int sayhello(int count)
{
    printf("Hello!\n");
    
    if (count == 3)
    {
        return count;
    }

    sayhello(count + 1);
}

int main(void)
{
    // 재귀함수 호출
    int result = sayhello(1);
    printf("result: %d\n", result);
    return 0;
}
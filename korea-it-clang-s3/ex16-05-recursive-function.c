/*
파일명 : ex16-05-recursive-function

재귀함수
    자기 자신을 호출하는 함수
    
    !감상문
        반복문 비슷
    
        장점 : 변수 선언 줄어둠 / 가독성 좋을 수 있다?
        단점 : 스택메모리 오버플로우 발생 / 경우에 따라서 코드 찻기 힘듬!
*/

#include <stdio.h>
/*
main()
    sayHello()
        sayhello()
            sayHello()
*/
void sayhello()
{
    printf("Hello!\n");
    sayhello();
}

int main(void)
{
    // 재귀함수 호출
    sayhello();
    return 0;
}
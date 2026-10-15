#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int base = 0x9A; //바꿔서 출제 가능성 높음
    int result, result1, result2;
    int temp = 0;
    int left = 0;
    int right = 0;

    printf("가 :  ");
    for (int i = 7; i >= 0 ; i--)
    {
        result = (base >> i ) & 0x01;
        printf("%d", result);
    }
    printf("\n");

    result = (base >> 3) & 0x01;
    printf("나 : %d\n ", result);

    result1 = (base & 0xF0 ) >> 4;
    printf("다 -1 : %x\n ", result1);

    result2 = (base & 0x0F );
    printf("다 -2 : %x\n ", result2);

    left = (result1 ^ 0x08);
    printf("라 -1 : %d\n", left);
    right = (result2 ^ 0x0F);
    printf("라 -2 : %d\n", right);

    temp = right;
    right = left;
    left = temp;
    printf("마 -1 : %d\n", left);
    printf("마 -2 : %d\n", right);

    result = (left << 4) | right;
    printf("바 : %d\n", result);

}


// 가) 8비트 정보를 가진 0x9A라는 정수형(혹은 문자형)의 각 비트를 상위비트부터 출력해 보시오.

//  나) 0x9A라는 문자의 하위 4번째 비트 값을 구해 출력해 보시오.

//  다) 8비트를 4비트씩 분리하여 각각 0x9와 0xA를 출력해 보시오

//  라) 0x9에는 0xB와 XOR를 0xA에는 0xF와 XOR를 하여 각각 left와 right 라는 변수에 저장해 보시오.

//  마) left와 right 라는 변수의 값을 서로 바꾸어 보시오.

//  바) left 변수 값과 right 변수 값을 서로 연접시켜(붙여서) 하나의 문자를 만들어 보시오.
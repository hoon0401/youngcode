#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(){
    char ch, in[4];
    int i, low, high;
    unsigned long int test;

    printf("원하는 4문자를 입력하시오.");

    for(i = 0; i<4; i++)
    {
        scanf(" %c", &ch);
        in[i] = ch;
    }
    printf("%x %x %x %x \n", in[0], in[1], in[2], in[3]);

    ch = in[3];
    for( i = 2; i>=0; i--)
    {
        in[i + 1] = in[i];
    }
    in[0] = ch;
    printf("%x %x %x %x \n", in[0], in[1], in[2], in[3]);
    for (i = 0; i<4; i++){
        low = in[i] & 0xF;
        high = (in[i] & 0xF0) >> 4;
        in[i] = (low << 4) + high;
    }
    printf("%x %x %x %x \n", in[0], in[1], in[2], in[3]);
    test = (in[0]<<24) + (in[1]<<16) + (in[2]<<8) + in[3];
    printf("%lx \n", test);
    

}

// 2. 배열 다루기

//  가) 4바이트의 문자 a,b,c,d를 키보드로 입력받아 배열  in[4]에 저장하고 16진수 값으로 출력해 보시오.

//        답) 0x61 0x62 0x63 0x64

//  나) 위의 4개의 바이트를 우측으로 한 바이트씩 회전이동 하여 16진수 값으로 출력해 보시오

//        답) 0x64 0x61 0x62 0x63

//  다) 4개의 바이트를 각각 4비트씩 나눈 후 위치를 바꾸고 16진수 값으로 출력해 보시오

//       답) 0x46 0x16 0x26 0x36

// 라) 위에서 4개의 바이트를 하나의 unsigned long int 인 test라는 변수로 바꾸어 출력해 보시오.

//       답) 0x46162636
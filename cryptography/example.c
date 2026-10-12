#include <stdio.h>
int x =500;
void example(int a)
{
    int b=200;  //자동 지역변수

    b+=a;
    x+=a;
    printf("b(자동변수 )= %d, x(전역변수)= %d\n", b,x);
}

void main()
{
    int a=50;   //지역변수
    example(a);
    example(a);
    example(a);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int GCD_operation(int x, int y);

void main(){
    int num1, num2, gcd;

    printf("* 정수를 입력하시오 : ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
        gcd = GCD_operation(num1, num2);
    else
        gcd = GCD_operation(num2, num1);


    printf("* %d, %d : %d", num1, num2, gcd);
}

int GCD_operation(int x, int y){
    int r;

    while (y)
    {
        r = x % y;
        x = y;
        y= r;
    
    }
    
    return x;
}
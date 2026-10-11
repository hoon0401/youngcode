#ifndef _UTIL
#define _UTIL
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

#define SWAP(x, y, temp)((temp) = (x), (x)=(y),(y)=(temp))
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void makeRandom(int array[], int n)
{
    srand(time(NULL));
    for(int i = 1; i <= n; i++){
        array[i] = rand() % 10000;
    }
}

void printArray(int array[], int n)
{
    printf("========== size : %d\n", n);
    for(int i = 1; i <= n; i++){
        printf("%7d ", array[i]);
        if(i % 20 == 0) printf("\n");
    }
    printf("==========\n");
}

#endif
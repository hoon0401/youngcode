#ifndef _SELECTIONSORT
#define _SELECTIONSORT
#include "util.h"
int theLargest(int A[], int last)
{
    int largest = 1;
    for(int i = 2; i <= last; i++){
        if(A[i] > A[largest]) largest = i;
    }
    return largest;
}

void selectionSort(int A[], int n){
    int k;
    for(int last = n; last > 1; last--){
        k = theLargest(A, last);
        swap(&A[k], &A[last]);
    }
}

void insertionSort(int A[], int n)
{
    int loc = 0;
    for(int i = 2; i <= n; i++){
        loc = i - 1;
        int newItem = A[i];
        while(loc >= 1 && newItem < A[loc]){
            A[loc + 1] = A[loc];
            loc--;
        }
        A[loc + 1] = newItem;
    }
}


#endif
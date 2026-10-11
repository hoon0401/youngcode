#include "Header\selectionSort.h"
#include "Header\util.h"
#include "Header\mergesort.h"
#include "Header\heapsort.h"
#include <time.h>


int partition(int A[], int p, int r)
{
    int x, i, j;
    x = A[r];
    i = p - 1;
    for(j = p; j <= r - 1; j++){
        if(A[j] <= x){
            i++;
            swap(&A[i], &A[j]);
        }
    }

    swap(&A[i + 1], &A[r]);
    return i + 1;
}


void quickSort(int A[], int p, int r)
{
    if(p < r){
        int q = partition(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}

int main()
{
    int start, end;
    int array[SIZE] = {0};
    makeRandom(array, SIZE-1);
    start = clock();
    mergeSort(array, 1, SIZE-1);
    end = clock();
    printArray(array, SIZE-1);
    printf("MS = %lf\n", (double)(end-start)/CLOCKS_PER_SEC);

    return 0;
}
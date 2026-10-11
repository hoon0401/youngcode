#ifndef _HEAPSORT
#define _HEAPSORT
void heapify(int A[], int k, int n){
    int left, right, smaller, temp;
    left = 2*k;
    right = 2*k+1;
    if(right <= n){
        if(A[left] < A[right]) smaller = left;
        else                   smaller = right;
    }else if(left <= n){
        smaller = left;
    }else return;

    if(A[smaller] < A[k]){
        SWAP(A[smaller], A[k], temp);
        heapify(A, smaller, n);
    }
}

void buildHeap(int A[], int n){

    //n/2 -> leaf가 아닌 마지막 노드
    for(int i = n/2; i >= 1; i--)   heapify(A, i, n);
}
void heapSort(int A[], int n)
{
    int temp;
    buildHeap(A, n);
    for(int i=n; i>=2; i--){
        SWAP(A[1], A[i], temp);
        heapify(A, 1, i-1);
    }
}
#endif
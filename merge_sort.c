#include <stdio.h>
/**
 * A[low ... mid]有序, A[mid+1 ... high]有序,合并前后两个部分为新的有序表
 */
void merge( int A[], int low, int mid, int high, int tmp[] ) {

    // for (int i = 0; i < high-low+1; i++) {
    //     tmp[i] = A[i];
    // }
    int i=low, j=mid+1, k=0;   
    while (i <= mid && j <= high ) {
        if (A[i] <= A[j]) {
            tmp[k++] = A[i++];
        } else {
            tmp[k++] = A[j++];
        }
    }

    while( i <= mid ) {
        tmp[k++] = A[i++];
    }
    while( j <= high ) {
        tmp[k++] = A[j++];
    }
    // tmp里已经放好归并完的元素
    for(int i=0; i < high-low+1; i++) 
        A[low+i] = tmp[i];              // 复制到low low+1 ...
}

void mergeSort(int A[], int low, int high, int tmp[]) {
    if( low == high )
        return;
    // if ( low < high ) {
        int mid = low + (high-low) / 2;
        mergeSort(A, low, mid, tmp);
        mergeSort(A, mid+1, high, tmp);
        merge(A, low, mid, high, tmp);
    // }
}

int main(int argc, char const *argv[])
{
    int A[10] = {10,2,5,9,6,7,4,3,8,1};
    int tmp[10];
    // merge(A, 0, 4, 9);
    mergeSort(A, 0, 9, tmp);
    for (int i = 0; i < 10; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}

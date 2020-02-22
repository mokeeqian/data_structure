/**
 * 冒泡排序
 */
#include <stdio.h>

void bubbleSort(int A[], int size) {
    int i, j;
    for ( i = 0; i < size-1; i++)       // 最多n-1 趟冒泡
    {
        int flag = 0;                   // 一趟冒泡中是否发生交换
        for (j = size-1; j > i; j--)    // 从后往前扫描，直到当前扫描到当前的元素
        {
            if (A[j-1] < A[j])          // 如果有逆序，就交换
            {
                // 交换
                int tmp = A[j];
                A[j] = A[j-1];
                A[j-1] = tmp;
                flag = 1;
            }
        }
        if (!flag)
        {
            return;
        }
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int A[10] = {9,8,7,4,6,1,5,3,2,1};
    bubbleSort(A, 10);
    int i = 10;
    while (i--)
    {
        printf("%d ", A[i]);
    }
    return 0;
}

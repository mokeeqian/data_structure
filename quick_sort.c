/**
 * 基于递归实现的快速排序
 */
#include <stdio.h>

// 对子表进行一趟划分，划分后轴值pivot被放入最终的位置，
// 在他之前的元素狗比他小，之后的的都比他大
// return: 轴值所在的下标
int partition(int A[], int low, int high) {
    int pivot = A[low];
    while (low < high)
    {
        while (low < high && A[high] >= pivot)      // 从后往前找比pivot小的元素
        {
            high --;
        }
        A[low] = A[high];                           // 把这个元素移动(交换)到pivot前面去
                                                    // (第一次执行就移动到原来轴值的位置)
        while (low < high && A[low] <= pivot)       // 从前往后找比pivot大的元素
        {
            low ++;
        }
        A[high] = A[low];                           // 往后移动
    }
    A[low] = pivot;                                 // pivot放入最终位置
    return low;    
}

/**
 * 快速排序递归实现
 */
void quickSort(int A[], int low, int high) {
    if (low < high)
    {
        /* code */
        int pivot_index = partition(A, low, high);
        quickSort(A, low, pivot_index-1);
        quickSort(A, pivot_index+1, high);
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int A[11] = {9,8,7,6,5,4,3,3,2,1,0};
    quickSort(A, 0,10);
    for (size_t i = 0; i < 11; i++)
    {
        /* code */
        printf("%d ", A[i]);
    }
    
    return 0;
}

#include <stdio.h>

/**
 * 升序的直接插入排序
 */
void directInsertSort(int *nums, int size) {
    int i, j;
    for ( i = 2; i < size; i++)
    {
        // nums[0]作为前哨战，同时作为临时变量，可以避免不必要的if逻辑
        nums[0] = nums[i];          // 将当前扫描到的值复制到前哨战
        // 找元素待插位置。用当前元素(nums[0]值和他相等)不断和它前驱元素比较，如果比他前驱小，则他的前驱往后移动，
        for ( j = i-1; nums[0] < nums[j]; j-- )     
        {
            nums[j+1] = nums[j];            // 后移
        }
        nums[j+1] = nums[0];                // 当前元素插入到待插的位置
    }
}

/**
 * 测试
 */
int main(int argc, char const *argv[])
{
    /* code */
    int nums[20] = {-1, 1,23,5,17,9,11,13,12,10,8,6,4,2,0,15,7,18,3,43};
    directInsertSort(nums, 19);
    for( int i = 1; i < 20; i++ ) {
        printf("%d\t", nums[i]);
    }
    return 0;
}

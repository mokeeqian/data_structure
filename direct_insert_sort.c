#include <stdio.h>

void directInsertSort(int *nums, int size) {
    int i, j;
    for ( i = 2; i < size; i++)
    {
        nums[0] = nums[i];
        for ( j = i-1; nums[0] < nums[j]; j-- )
        {
            nums[j+1] = nums[j];
        }
        nums[j+1] = nums[0];
    }
}

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

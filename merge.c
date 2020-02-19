#include <stdio.h>
#include <stdlib.h>



/**
	王道P18 7
	合并两个有序顺序表为一个新的有序表
*/

void merge(int a[], int b[], int c[]);

int main()
{
    int a[10] = {1,3,5,7,9,11,13,15,17,19};
    int b[10] = {2,4,6,8,10,12,14,16,18,20};
    int c[20];

	merge(a,b,c);
    return 0;
}

//按升序归并 a,b是目标数组， C是结果数组
void merge(int a[], int b[], int c[]) {
	int i = 0;	// 遍历a数组
	int j = 0;	// 遍历b数组
	int k = 0;	// 访问c数组

	// 两两比较
	while( i <10 && j <10 ) {
		if ( a[i] <= b[j] )
			c[k++] = a[i++];	// 把较小的a[i]复制到c[k]中，i++, k++, 继续比较
		else
			c[k++] = b[j++];	// 
	}

	printf("i= %d\n", i);
	printf("j= %d\n", j);

	// 没比较完，做个处理，继续比较 --> 这两个while 只会执行一个
	while( i < 10 )
		c[k++] = a[i++];
	while( j < 10 )
		c[k++] = b[j++];
    
	for ( i = 0; i < 20; i++ )
		printf("%d ", c[i]);

    return;
}

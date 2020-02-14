/*
	问题:
		删除指定 **有序** 顺序表中值在s-t之间的元素
	思路:
		有序顺序表中，故值在s-t之间的元素必定是在物理上连续存放的，
		找到这段元素的头，和尾，删除即可。

*/

#include <stdio.h>

void del_s_t(int data[], int size, int s, int t) {

	int i;
	int start1;		// 这段待删除元素的第一个元素下标
	int start2;		// 最后一个待删除元素的下一个元素下标，把包括他后他后面的元素移动到start1位置
	int count = 0;
	for (i = 0; i < size; i++)
	{
		if ( data[i] >= s && data[i] <= t ) {
			count ++;
		}
		else if ( data[i] > t)
			break;
	}

	start1 = i - count;
	start2 = i;

	printf("start1= %d\n", start1);
	printf("start2= %d\n", start2);


	for (;start2 < size; start2++)		// 移动后面剩下的元素
	{
		data[start1++] = data[start2];
		// printf("%d\n", start2);
	}

	return;
}


int main(int argc, char const *argv[])
{
	/* code */

	int data[10] = {0,1,2,3,4,5,6,7,8,9};
	del_s_t(data, 10, 2, 6);

	for (int i = 0; i < 5; ++i)
	{
		/* code */
		printf("data[ %d ]= %d\n", i, data[i]);
	}

	return 0;
}
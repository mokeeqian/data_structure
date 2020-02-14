/*
	问题:
		删除指定 **无序** 顺序表中值在s-t之间的元素
	思路:

*/

#include <stdio.h>

void del_s_t_no_order(int data[], int size, int s, int t) {
	
}


int main(int argc, char const *argv[])
{
	/* code */

	int data[10] = {0,1,2,3,4,5,6,7,8,9};
	del_s_t_no_order(data, 10, 2, 6);

	for (int i = 0; i < 5; ++i)
	{
		/* code */
		printf("data[ %d ]= %d\n", i, data[i]);
	}

	return 0;
}
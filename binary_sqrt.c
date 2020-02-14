#include<stdio.h>
#include <math.h>

#ifndef EPS
#define EPS 0.000001		
#endif

/*
	二分法暴力求解平方根
	FIXME: 可能会有溢出问题
*/
double binary_sqrt(double num) {
	double low = 0.0;
	double high;
	double mid;
	double res;

	// 特殊处理，因为小于1的数，平方只会越来越小
	if ( num < 1.0 ) {
		high = 1.0;
	}

	high = num;
	mid = low + (high-low) / 2.0;

	while( fabs((res = mid*mid)-num) > EPS ) {
		if (res < num) {
			low = mid;
		} else if ( res > num ) {
			high = mid;
		} else {
			return mid;
		}

		mid = low + (high-low) / 2.0;
	}

	return mid;
}




void test() {
	double eps = 1e-6;
	double k = 5.0;  // 输入正数
	double l = 0.0,r,mid;
	if (k>=1) r = k;  // 若输入正数大于1，则右端点设为 k
    if (k<1)  r = 1.0; // 若输入整数小于1，则右端点设为 1

	while (fabs(l-k/l)>eps)
	{
		mid = l + (r - l) /2 ;   
		if (mid<k/mid)
		{
			l = mid;
		}
		else {
			r = mid;
		}
	}
	//cout << l << endl;
	
	printf("%f\n", l);
}

int main()
{
	test();
	printf("my= %f\n", binary_sqrt(1.0));
	return 0;
}

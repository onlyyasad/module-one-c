#include <stdio.h>


/**
 * Topic:
 * Assignment operators: = += -= /= *= %=
 * Pre-increment, post-increment ++ --
 * Bitwise operations & | ~ >> <<
 * 
 * Example:
 * Check even or odd using bitwise operation
 * Left shift = a * 2
 * Right shift = a/2
 * */

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int a = 20;

	int b = a++; //post-increment b value should be previous value of a

	int c = 10; 
	int d = ++c; //pre-increment d value should be 11

	// a+;

	// scanf("%d", &a);

	printf("Value of a = %d; value of b = %d; value of c = %d , value of d = %d\n", a, b, c, d);

	/** 
	 * even odd check with bitwise operation: if return is zero then the input number is even, if return is one then the input number is odd
	 **/

	// int x;
	// scanf("%d", &x);
	// int y = x & 1;
	// printf("value of zeroeth bit is: %d\n", y);

	/** 
	 * right shift: >> if we right shift once it will work as integer division with 2
	 * example: if we right shift 11 once, the result will be 5
	 **/

	// int p = 11;

	// int q = (p >> 1);

	// int m;

	// scanf("%d", &m);

	// int bit0, bit1, bit2, bit3;

	// bit0 = m & 1;
	// bit1 = (m >> 1) & 1;
	// bit2 = (m>>2) & 1;
	// bit3 = (m>>3) & 1;

	// printf("bit0 = %d, bit1 = %d, bit2 = %d, bit3 %d\n", bit0, bit1, bit2, bit3);


	/**
	 * Left shift: << if we left shift once it will work as multiplication with 2
	 * */

	int i; //number
	int j; // bit position

	scanf("%d", &i);
	scanf("%d", &j);

	int ans = i & (1 << j);

	printf("value of your is %d\n", ans);

	return 0;
}
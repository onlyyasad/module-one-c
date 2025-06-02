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

	// even odd check with bitwise operation: if return is zero then the input number is even, if return is one then the input number is odd
	int x;
	scanf("%d", &x);
	int y = x & 1;
	printf("value of zeroeth bit is: %d\n", y);
	return 0;
}
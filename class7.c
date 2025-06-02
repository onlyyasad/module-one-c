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

	a += 5;

	// scanf("%d", &a);

	printf("Test %d", a);

	return 0;
}
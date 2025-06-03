#include <stdio.h>

/**
 * Bitwise operators:
 * & : and -> if both zero 0 then 0 otherwise 1
 * 		-> example: 100101
 * 				    101100  &
 * 				   --------
 * 				    101101
 * 
 * | : or -> if both one 1 then 1 otherwise 0
 * 		-> example: 100101
 * 				    101100  |
 * 				   --------
 * 				    100100
 * 
 * ^ : xor(exclusive or) -> if both same then 0, if different then 1
 * 		-> example: 100101
 * 				    101100  ^
 * 				   --------
 * 				    001001
 * */

int main (){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int a;

	scanf("%d", &a);

	printf("Test input: %d\n", a);

	return 0;
}
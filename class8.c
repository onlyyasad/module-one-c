#include <stdio.h>

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
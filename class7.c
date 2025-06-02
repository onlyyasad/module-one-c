#include <stdio.h>

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
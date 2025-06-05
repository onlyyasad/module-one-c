#include <stdio.h>

/**
 * Topic:
 * Contitional Statements
 * Logical operators
 * */

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int price, note;

	scanf("%d%d", &price, &note);

	int difference = note - price;

	if(price > note){
		printf("No");
	}else if(note - price > 5){
		printf("No")
	}

	return 0;
}